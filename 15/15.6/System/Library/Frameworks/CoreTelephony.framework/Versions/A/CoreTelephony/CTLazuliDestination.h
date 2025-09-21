@class NSString, CTLazuliAlternateIdentities;

@interface CTLazuliDestination : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *extractedUri;
@property (nonatomic) char isBot;
@property (retain, nonatomic) CTLazuliAlternateIdentities *identities;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *conversationID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliDestination:(id)a0;

@end
