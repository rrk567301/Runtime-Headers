@class NSString;

@interface CKDeviceCapabilityCheckResult : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isSupported;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsSupported:(BOOL)a0;

@end
