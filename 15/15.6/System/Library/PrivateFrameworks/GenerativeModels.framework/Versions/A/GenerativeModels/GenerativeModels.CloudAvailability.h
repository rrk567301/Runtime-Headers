@interface GenerativeModels.CloudAvailability : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ reasons;
    void /* unknown type, empty encoding */ bypass;
}

@property (class, nonatomic) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
