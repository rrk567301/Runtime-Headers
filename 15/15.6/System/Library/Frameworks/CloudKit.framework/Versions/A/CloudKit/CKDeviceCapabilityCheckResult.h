@class NSString;

@interface CKDeviceCapabilityCheckResult : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char isSupported;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSupported:(char)a0;

@end
