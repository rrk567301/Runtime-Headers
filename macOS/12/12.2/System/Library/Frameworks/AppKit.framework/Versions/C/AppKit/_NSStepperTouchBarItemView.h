@class NSString, NSFormatter, _NSStepperModel, NSScrubber;

@interface _NSStepperTouchBarItemView : NSView <NSScrubberDataSource, NSScrubberDelegate> {
    long long _numberOfStepperItems;
    _NSStepperModel *_stepperModel;
    NSScrubber *_scrubber;
    long long _selectedIndexAtStartOfScroll;
    id _originalScrollViewTarget;
    SEL _originalScrollViewAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double maxValue;
@property double minValue;
@property double increment;
@property double value;
@property (weak) id target;
@property SEL action;
@property long long mode;
@property (retain) NSFormatter *formatter;
@property (copy) id /* block */ drawingHandler;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)_commonInit;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)_didTriggerScrollGestureRecognizer:(id)a0;
- (double)_actualMin;
- (void)_updateNumberOfStepperItems;
- (void)_scrubberDidChangeSelectedIndex:(long long)a0;
- (double)_mapScrubberItemIndexToStepperValue:(long long)a0;

@end
