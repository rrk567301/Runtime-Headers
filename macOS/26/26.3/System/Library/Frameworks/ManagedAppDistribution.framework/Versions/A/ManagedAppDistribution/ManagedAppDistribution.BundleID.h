@class NSString;

@interface ManagedAppDistribution.BundleID : NSObject {
    void /* unknown type, empty encoding */ rawValue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *redactedDescription;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
