@class NSArray, NSMutableDictionary, KTAccountPublicID, NSString;

@interface KTIDStaticKeyStoreEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) KTAccountPublicID *publicKeyID;
@property (copy) NSArray *mappings;
@property (retain) NSMutableDictionary *handles;
@property (copy) NSString *contactServerPath;
@property (copy) NSString *contactExternalURI;
@property (copy) NSString *contactIdentifier;
@property (readonly) BOOL valid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
