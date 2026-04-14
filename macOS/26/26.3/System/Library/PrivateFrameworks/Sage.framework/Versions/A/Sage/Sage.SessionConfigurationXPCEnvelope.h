@class NSData;

@interface Sage.SessionConfigurationXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _configuration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_configuration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
