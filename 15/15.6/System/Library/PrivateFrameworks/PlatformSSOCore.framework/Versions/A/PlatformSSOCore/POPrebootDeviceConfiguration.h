@class NSData, NSDate;

@interface POPrebootDeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *encryptionKeyData;
@property (readonly, nonatomic) NSDate *encryptionKeySaveDate;
@property (copy, nonatomic) NSData *deviceConfigurationData;
@property (copy, nonatomic) NSData *loginConfigurationData;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)dataRepresentationForDisplay:(char)a0;
- (id)dictionaryRepresentationForDisplay:(char)a0;

@end
