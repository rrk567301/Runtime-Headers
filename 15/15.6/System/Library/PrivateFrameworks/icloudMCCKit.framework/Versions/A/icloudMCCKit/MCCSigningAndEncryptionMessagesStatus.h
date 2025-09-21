@interface MCCSigningAndEncryptionMessagesStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char signMessagesIsEnabled;
@property (nonatomic) char encryptMessagesIsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
