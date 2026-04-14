@class NSData;

@interface Sage.StringRenderedPromptSanitizerXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _sanitizer;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_sanitizer;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
