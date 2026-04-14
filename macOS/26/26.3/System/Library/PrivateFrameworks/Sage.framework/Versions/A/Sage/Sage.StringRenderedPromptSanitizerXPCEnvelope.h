@class NSData;

@interface Sage.StringRenderedPromptSanitizerXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _sanitizer;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_sanitizer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
