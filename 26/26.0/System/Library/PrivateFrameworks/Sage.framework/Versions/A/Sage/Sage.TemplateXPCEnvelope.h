@class NSData;

@interface Sage.TemplateXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _template;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_template;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
