@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *postalAddresses;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;

+ (id)_keychainWrapper;
+ (id)contactInformationFromKeychain;
+ (void)deleteContactInformationFromKeychain;
+ (void)saveContactInformationToKeychain:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)keychainData;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeychainData:(id)a0;
- (id)initWithPostalAddresses:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2;

@end
