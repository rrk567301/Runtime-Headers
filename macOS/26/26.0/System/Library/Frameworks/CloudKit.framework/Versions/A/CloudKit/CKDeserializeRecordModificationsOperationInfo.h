@class NSData;

@interface CKDeserializeRecordModificationsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *serializedModifications;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
