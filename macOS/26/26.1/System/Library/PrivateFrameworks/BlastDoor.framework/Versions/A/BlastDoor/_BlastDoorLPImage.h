@class _BlastDoorLPImageProperties, NSString, NSData, NSURL;

@interface _BlastDoorLPImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) _BlastDoorLPImageProperties *properties;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)_encodedSize;
- (id)_initWithImage:(id)a0 properties:(id)a1;
- (BOOL)_shouldEncodeData;

@end
