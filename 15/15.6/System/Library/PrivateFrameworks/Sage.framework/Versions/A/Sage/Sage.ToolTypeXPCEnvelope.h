@class NSData;

@interface Sage.ToolTypeXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _tool;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, copy) NSData *_tool;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
