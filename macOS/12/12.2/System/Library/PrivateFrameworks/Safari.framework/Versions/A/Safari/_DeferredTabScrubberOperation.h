@interface _DeferredTabScrubberOperation : NSObject {
    long long _operationType;
    long long _insertionIndex;
    long long _removalIndex;
    long long _selectionIndex;
    long long _sourceIndex;
    long long _targetIndex;
}

+ (id)insertionOperationForIndex:(long long)a0;
+ (id)removalOperationForIndex:(long long)a0 selectingItemAtIndex:(long long)a1;
+ (id)moveOperationFromIndex:(long long)a0 toIndex:(long long)a1;

- (id)init;
- (void)applyToVisualScrubberViewController:(id)a0;

@end
