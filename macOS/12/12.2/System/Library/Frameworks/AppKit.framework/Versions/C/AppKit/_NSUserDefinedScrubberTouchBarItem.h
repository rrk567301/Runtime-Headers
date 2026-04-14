@class NSString, NSArray, NSScrubber;

@interface _NSUserDefinedScrubberTouchBarItem : NSTouchBarItem <NSScrubberDataSource, NSScrubberDelegate> {
    NSScrubber *_scrubber;
    NSArray *_keyChars;
    NSArray *_labels;
    NSString *_label;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)view;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)customizationLabel;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)_validateUserDefinedTouchBarItem;

@end
