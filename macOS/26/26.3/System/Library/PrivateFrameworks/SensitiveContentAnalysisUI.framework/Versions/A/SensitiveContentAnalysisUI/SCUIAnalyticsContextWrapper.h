@interface SCUIAnalyticsContextWrapper : NSObject {
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void).cxx_destruct;
- (void)collectResourcesInteractionEventWithRequestedResource:(long long)a0;
- (void)collectResourcesShownEvent;
- (id)initWithContextWrapper:(id)a0;
- (id)initWithInterventionType:(long long)a0 menuType:(long long)a1 actions:(id)a2;
- (id)initWithInterventionType:(long long)a0 menuType:(long long)a1 actions:(id)a2 authority:(id)a3;

@end
