@class NSData;

@interface Sage.SessionConfigurationXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _configuration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_configuration;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
