@class NSArray, CHSRemoteDevicePredicate, NSString;

@interface CHSControlConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _controlItems;
    void /* unknown type, empty encoding */ _replicationPredicate;
    void /* unknown type, empty encoding */ _automaticallyOrphaned;
    void /* unknown type, empty encoding */ _expirationTimeout;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *controlItems;
@property (nonatomic, readonly) CHSRemoteDevicePredicate *replicationPredicate;
@property (nonatomic, readonly) BOOL automaticallyOrphaned;
@property (nonatomic, readonly) double expirationTimeout;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithConfiguration:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithControlItems:(id)a0;
- (id)initWithControlItems:(id)a0 automaticallyOrphaned:(BOOL)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1 automaticallyOrphaned:(BOOL)a2;

@end
