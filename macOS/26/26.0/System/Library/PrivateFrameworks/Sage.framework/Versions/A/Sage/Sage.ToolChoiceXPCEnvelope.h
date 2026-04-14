@class NSData;

@interface Sage.ToolChoiceXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _toolChoice;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_toolChoice;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
