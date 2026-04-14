@interface SKRSessionConfigurationXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mafConfiguration;
    void /* unknown type, empty encoding */ sessionId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
