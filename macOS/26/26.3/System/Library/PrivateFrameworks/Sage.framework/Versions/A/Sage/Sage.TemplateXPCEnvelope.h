@class NSData;

@interface Sage.TemplateXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _template;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_template;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
