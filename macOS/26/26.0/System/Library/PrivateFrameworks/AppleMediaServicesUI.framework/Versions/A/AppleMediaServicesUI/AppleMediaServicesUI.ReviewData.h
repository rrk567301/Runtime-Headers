@interface AppleMediaServicesUI.ReviewData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
    void /* unknown type, empty encoding */ nickname;
    void /* unknown type, empty encoding */ rating;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
