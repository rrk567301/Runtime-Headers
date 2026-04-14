@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;

+ (long long)profileTypeWithString:(id)a0;
+ (long long)screenLockedBehaviorWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProfileData:(id)a0;
- (void)removeURLPrefix:(id)a0;
- (id)copyProfile;
- (id)copyProfileForClient;

@end
