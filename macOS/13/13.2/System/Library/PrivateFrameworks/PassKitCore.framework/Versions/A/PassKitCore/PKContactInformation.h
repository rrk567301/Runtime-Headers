@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *postalAddresses;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;

+ (id)contactInformationFromKeychain;
+ (void)saveContactInformationToKeychain:(id)a0;
+ (void)deleteContactInformationFromKeychain;
+ (id)_keychainWrapper;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithPostalAddresses:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2;
- (id)initWithKeychainData:(id)a0;
- (id)keychainData;

@end
