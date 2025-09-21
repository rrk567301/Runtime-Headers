@class NSNumber, NSString;

@interface SASelectedUserAttributes : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *lowScoreThreshold;
@property (copy, nonatomic) NSNumber *meetsPersonalRequestThreshold;
@property (copy, nonatomic) NSNumber *meetsUserSessionThreshold;
@property (copy, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSString *userIdentityClassification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
