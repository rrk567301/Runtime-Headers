@interface SiriKitFlow.RecentDialog : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ addViews;
    void /* unknown type, empty encoding */ expiresAt;
    void /* unknown type, empty encoding */ requestId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
