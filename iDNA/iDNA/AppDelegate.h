//
//  AppDelegate.h
//  iDNA
//
//  Created by alex on 17/12/2012.
//  Copyright (c) 2012 alex. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Cell;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSInteger populationSize;
    NSInteger DNALength;
    NSInteger mutationRate;
    BOOL paused;
}

@property Cell* DNA;

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *populationSizeTextField;
@property (weak) IBOutlet NSTextField *DNALengthTextField;
@property (weak) IBOutlet NSTextField *mutationRateTextField;
@property (weak) IBOutlet NSTextField *goalDNATextField;
@property (weak) IBOutlet NSTextField *generationLabel;
@property (weak) IBOutlet NSTextField *bestMatchLabel;
@property (weak) IBOutlet NSButton *startEvolutionButton;
@property (weak) IBOutlet NSButton *pauseButton;
@property (weak) IBOutlet NSSlider *populationSizeSlider;
@property (weak) IBOutlet NSSlider *DNALengthSlider;
@property (weak) IBOutlet NSSlider *mutationRateSlider;

- (IBAction)startEvolution:(id)sender;
- (IBAction)pauseClick:(id)sender;

@end
