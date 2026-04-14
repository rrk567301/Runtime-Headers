@class NSData;

@interface Sage.CompletePromptResponseElementXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _event;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_event;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
