@interface GenerativeModels.CloudAvailability : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ reasons;
    void /* unknown type, empty encoding */ bypass;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
