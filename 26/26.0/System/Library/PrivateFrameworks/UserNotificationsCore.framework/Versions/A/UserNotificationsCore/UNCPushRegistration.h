@class NSString, NSData;

@interface UNCPushRegistration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSData *token;
@property (readonly, copy, nonatomic) NSString *tokenIdentifier;

+ (id)pushRegistrationWithEnvironment:(id)a0 tokenIdentifier:(id)a1 token:(id)a2;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 tokenIdentifier:(id)a1 token:(id)a2;

@end
