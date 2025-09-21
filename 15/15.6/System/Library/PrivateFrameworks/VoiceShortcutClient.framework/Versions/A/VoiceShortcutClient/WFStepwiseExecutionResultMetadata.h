@class LNUndoContext, LNAttribution;

@interface WFStepwiseExecutionResultMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) LNUndoContext *undoContext;
@property (readonly, nonatomic) char didRunOpensIntent;
@property (retain, nonatomic) LNAttribution *attribution;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUndoContext:(id)a0 didRunOpensIntent:(char)a1 attribution:(id)a2;

@end
