@class LNUndoContext;

@interface WFExecutionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LNUndoContext *undoContext;
@property (readonly, nonatomic) BOOL didRunOpensIntent;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUndoContext:(id)a0 didRunOpensIntent:(BOOL)a1;

@end
