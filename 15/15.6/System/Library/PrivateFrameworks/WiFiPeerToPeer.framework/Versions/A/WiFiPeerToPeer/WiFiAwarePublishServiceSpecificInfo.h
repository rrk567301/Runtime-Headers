@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSData *txtRecordData;
@property (copy, nonatomic) NSString *instanceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)blobEquals:(id)a0;
- (char)instanceNameEquals:(id)a0;
- (char)txtRecordEquals:(id)a0;

@end
