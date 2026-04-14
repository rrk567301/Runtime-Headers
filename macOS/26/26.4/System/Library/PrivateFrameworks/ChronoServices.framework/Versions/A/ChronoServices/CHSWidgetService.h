@interface CHSWidgetService : NSObject {
    void /* unknown type, empty encoding */ connection;
}

@property (class, nonatomic, readonly) CHSWidgetService *sharedWidgetService;

- (void)invalidateRelevancesOfKind:(id)a0 inBundle:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
