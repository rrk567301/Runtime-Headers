@interface ScreenTimeCore.AccessRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resource;
    void /* unknown type, empty encoding */ accessType;
}

@property (class, nonatomic) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
