@class NSData, NSDate;

@interface POPrebootDeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *encryptionKeyData;
@property (readonly, nonatomic) NSDate *encryptionKeySaveDate;
@property (copy, nonatomic) NSData *deviceConfigurationData;
@property (copy, nonatomic) NSData *loginConfigurationData;

- (id)dataRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)dictionaryRepresentationForDisplay:(BOOL)a0;

@end
