@interface GenerativeModels.CloudAvailability : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ reasons;
    void /* unknown type, empty encoding */ bypass;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
