@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString *_content;
}

@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)isSupportedEntityType:(long long)a0;
+ (id)keyForEmail:(id)a0;
+ (id)keyForNormalizedEmail:(id)a0;
+ (id)keyForNormalizedPhone:(id)a0;
+ (id)keyForInstantMessageAddress:(id)a0;
+ (id)keyForSocialProfile:(id)a0;
+ (id)keyForPersonHandle:(id)a0;
+ (id)keyForContactExternalId:(int)a0;
+ (id)keyForContactUniqueId:(id)a0;
+ (unsigned long long)identityTypeForKeyPart:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)emailAddress;
- (id)serialize;
- (BOOL)hasPhone;
- (id)phone;
- (id)socialProfile;
- (BOOL)hasEmailAddress;
- (id)initWithSerialized:(id)a0;
- (id)identityKey;
- (id)initWithType:(unsigned long long)a0 content:(id)a1;
- (BOOL)isEqualToIdentityKey:(id)a0;
- (BOOL)hasInstantMessageAddress;
- (id)instantMessageAddress;
- (BOOL)hasSocialProfile;

@end
