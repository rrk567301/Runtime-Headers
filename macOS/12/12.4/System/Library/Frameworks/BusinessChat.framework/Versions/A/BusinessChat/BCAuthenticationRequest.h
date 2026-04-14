@class NSString, BCOAuth2Parameters, NSDictionary;

@interface BCAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) BCOAuth2Parameters *oauth2;
@property (readonly, nonatomic) NSString *businessName;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
