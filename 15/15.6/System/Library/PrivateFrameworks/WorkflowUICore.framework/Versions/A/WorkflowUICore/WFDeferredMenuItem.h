@class WFDeferredMenuElementGroup;

@interface WFDeferredMenuItem : NSMenuItem {
    WFDeferredMenuElementGroup *_group;
    char _startedLoading;
    char _forceShowState;
}

- (void).cxx_destruct;
- (void)setMenu:(id)a0;
- (id)initWithGroup:(id)a0 forceShowState:(char)a1;

@end
