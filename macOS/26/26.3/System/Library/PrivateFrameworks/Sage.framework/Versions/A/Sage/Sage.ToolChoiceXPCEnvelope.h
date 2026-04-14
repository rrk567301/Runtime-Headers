@class NSData;

@interface Sage.ToolChoiceXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _toolChoice;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_toolChoice;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
