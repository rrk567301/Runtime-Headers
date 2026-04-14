@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *listTransitions;

- (long long)count;
- (id)initWithCoder:(id)a0;
- (void)submitTransition:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)cleanTransition:(double)a0;
- (void).cxx_destruct;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)a0;
- (void)showTransition;
- (id)getPredTrans:(double)a0 duration:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (id)init;

@end
