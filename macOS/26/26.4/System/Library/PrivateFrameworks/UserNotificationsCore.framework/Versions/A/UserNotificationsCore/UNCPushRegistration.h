@class NSString, NSData;

@interface UNCPushRegistration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSData *token;
@property (readonly, copy, nonatomic) NSString *tokenIdentifier;

+ (id)pushRegistrationWithEnvironment:(id)a0 tokenIdentifier:(id)a1 token:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithEnvironment:(id)a0 tokenIdentifier:(id)a1 token:(id)a2;

@end
