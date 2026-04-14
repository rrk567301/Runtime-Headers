@class NSString;

@interface SIRINLURewriteMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int rewriteType;
@property (retain, nonatomic) NSString *rewrittenUtterance;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 utterance:(id)a1;

@end
