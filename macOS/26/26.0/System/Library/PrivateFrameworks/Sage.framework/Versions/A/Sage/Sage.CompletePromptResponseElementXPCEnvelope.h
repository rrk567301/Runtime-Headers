@class NSData;

@interface Sage.CompletePromptResponseElementXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _event;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_event;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
