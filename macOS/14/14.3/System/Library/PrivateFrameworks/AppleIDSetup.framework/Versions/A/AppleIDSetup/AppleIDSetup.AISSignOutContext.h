@interface AppleIDSetup.AISSignOutContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ altDSID;
    void /* unknown type, empty encoding */ type;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
