@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *listTransitions;

- (void)showTransition;
- (void)submitTransition:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)cleanTransition:(double)a0;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)count;
- (id)initWithCoder:(id)a0;
- (id)getPredTrans:(double)a0 duration:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;

@end
