@class NSString, NSArray;

@interface SYDEntitlements : NSObject {
    void /* unknown type, empty encoding */ entitlements;
}

@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) NSArray *additionalStoreIdentifiers;
@property (nonatomic, readonly) NSArray *storeIdentifiers;

- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleRecord:(id)a0;
- (id)relatedApplicationsForStoreIdentifier:(id)a0;

@end
