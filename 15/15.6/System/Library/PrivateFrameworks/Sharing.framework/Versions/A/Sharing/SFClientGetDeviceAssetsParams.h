@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned short bluetoothProductID;
@property (nonatomic) unsigned int colorCode;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double timeoutSeconds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
