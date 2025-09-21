@class LNUndoContext, LNAttribution;

@interface WFStepwiseExecutionResultMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LNUndoContext *undoContext;
@property (readonly, nonatomic) BOOL didRunOpensIntent;
@property (retain, nonatomic) LNAttribution *attribution;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUndoContext:(id)a0 didRunOpensIntent:(BOOL)a1 attribution:(id)a2;

@end
