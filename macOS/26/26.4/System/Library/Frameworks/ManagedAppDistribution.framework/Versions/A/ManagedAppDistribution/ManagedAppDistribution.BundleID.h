@class NSString;

@interface ManagedAppDistribution.BundleID : NSObject {
    void /* unknown type, empty encoding */ rawValue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *redactedDescription;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
