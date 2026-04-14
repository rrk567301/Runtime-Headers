@class NSString;

@interface DeviceInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ symbol;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
