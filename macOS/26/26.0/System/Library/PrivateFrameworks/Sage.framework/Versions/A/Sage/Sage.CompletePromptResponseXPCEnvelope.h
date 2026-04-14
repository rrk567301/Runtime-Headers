@class NSData;

@interface Sage.CompletePromptResponseXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _completion;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_completion;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
