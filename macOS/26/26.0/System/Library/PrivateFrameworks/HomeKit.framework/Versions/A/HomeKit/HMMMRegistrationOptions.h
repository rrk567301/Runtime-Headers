@interface HMMMRegistrationOptions : NSObject

@property (readonly, nonatomic) long long userRestriction;

- (id)attributeDescriptions;
- (id)init;
- (id)initWithUserRestriction:(long long)a0;

@end
