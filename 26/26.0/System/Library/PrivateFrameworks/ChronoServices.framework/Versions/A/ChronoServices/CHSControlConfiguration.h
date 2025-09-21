@class NSArray, CHSRemoteDevicePredicate, NSString;

@interface CHSControlConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying> {
    void /* function */ controlItems;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *controlItems;
@property (nonatomic, readonly) CHSRemoteDevicePredicate *replicationPredicate;
@property (nonatomic, readonly) BOOL automaticallyOrphaned;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithControlItems:(id)a0;
- (id)initWithControlItems:(id)a0 automaticallyOrphaned:(BOOL)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1 automaticallyOrphaned:(BOOL)a2;

@end
