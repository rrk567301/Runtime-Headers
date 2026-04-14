@class NSString, CTLazuliAlternateIdentities;

@interface CTLazuliDestination : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extractedUri;
@property (nonatomic) BOOL isBot;
@property (retain, nonatomic) CTLazuliAlternateIdentities *identities;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *conversationID;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliDestination:(id)a0;

@end
