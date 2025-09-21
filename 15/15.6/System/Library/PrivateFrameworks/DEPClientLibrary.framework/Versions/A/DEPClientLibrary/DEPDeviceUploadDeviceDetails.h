@class NSString;

@interface DEPDeviceUploadDeviceDetails : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *deviceUploadStatus;
@property (readonly, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;

@end
