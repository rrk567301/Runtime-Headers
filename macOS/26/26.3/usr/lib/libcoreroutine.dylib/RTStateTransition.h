@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *listTransitions;

- (long long)count;
- (void)submitTransition:(id)a0;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)getPredTrans:(double)a0 duration:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (void)cleanTransition:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void)showTransition;

@end
