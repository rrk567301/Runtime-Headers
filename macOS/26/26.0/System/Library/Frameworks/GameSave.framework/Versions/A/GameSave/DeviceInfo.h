@class NSString;

@interface DeviceInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ symbol;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
