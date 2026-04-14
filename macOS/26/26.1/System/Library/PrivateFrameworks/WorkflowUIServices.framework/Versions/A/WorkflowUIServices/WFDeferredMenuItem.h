@class WFDeferredMenuElementGroup;

@interface WFDeferredMenuItem : NSMenuItem {
    WFDeferredMenuElementGroup *_group;
    BOOL _startedLoading;
    BOOL _forceShowState;
}

- (void)setMenu:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 forceShowState:(BOOL)a1;

@end
