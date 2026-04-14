@class NSArray, _NSUserDefinedTouchBarItem;

@interface _NSLastActionPopoverTouchBarItem : NSPopoverTouchBarItem {
    long long _lastIndex;
    _NSUserDefinedTouchBarItem *_mainItem;
    NSArray *_internalItems;
    BOOL _hasGroupImage;
    BOOL _dynamicItems;
    SEL _selector;
}

@property BOOL remembersLastAction;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (void)_handleItem:(id)a0;
- (void)_handleTap:(id)a0;
- (void)_updateInternalItems;
- (void)_validateUserDefinedTouchBarItem;
- (void)showPopover:(id)a0;

@end
