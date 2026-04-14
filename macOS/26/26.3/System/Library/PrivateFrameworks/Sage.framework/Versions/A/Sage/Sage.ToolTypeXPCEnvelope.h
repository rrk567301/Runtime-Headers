@class NSData;

@interface Sage.ToolTypeXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _tool;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_tool;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
