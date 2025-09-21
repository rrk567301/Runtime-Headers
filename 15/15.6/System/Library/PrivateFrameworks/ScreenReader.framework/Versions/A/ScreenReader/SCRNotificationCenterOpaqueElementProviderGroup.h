@interface SCRNotificationCenterOpaqueElementProviderGroup : SCROpaqueElementProviderGroup {
    struct { unsigned char isNotificationList : 2; unsigned char isWidgetGrid : 2; } _srncFlags;
}

@property (readonly, nonatomic) char isNotificationList;
@property (readonly, nonatomic) char isWidgetGrid;

- (id)statusDescription;
- (char)allowFocusThroughSingleChild;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (long long)groupBehavior;
- (char)handleLayoutChangeWithInfo:(id)a0;
- (id)titleDescription;

@end
