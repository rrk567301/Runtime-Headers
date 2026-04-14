@class NSData;

@interface Sage.ToolTypeXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _tool;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_tool;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
