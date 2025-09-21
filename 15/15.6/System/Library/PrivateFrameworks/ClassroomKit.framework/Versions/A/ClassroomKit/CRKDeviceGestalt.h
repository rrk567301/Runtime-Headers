@class NSString;

@interface CRKDeviceGestalt : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, copy, nonatomic) NSString *systemVersion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithPlatform:(unsigned long long)a0 systemVersion:(id)a1;

@end
