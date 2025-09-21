@interface LACBiomeEvaluationMechanismState : NSObject

@property (readonly, nonatomic) BOOL available;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL lockout;
@property (readonly, nonatomic) unsigned int generation;

- (id)description;
- (id)initAvailable:(BOOL)a0 started:(BOOL)a1 success:(BOOL)a2 lockout:(BOOL)a3 generation:(unsigned int)a4;

@end
