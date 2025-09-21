@class NSData;

@interface Sage.ToolChoiceXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _toolChoice;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, copy) NSData *_toolChoice;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
