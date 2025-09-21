@interface IDSCurrentServerTimePair : NSObject

@property (readonly, nonatomic) unsigned long long initialProcessMonotonicTimeInNanoSeconds;
@property (readonly, nonatomic) unsigned long long initialServerTimeInNanoSeconds;
@property (readonly, nonatomic) char isAccurate;

- (id)initWithInitialProcessMonotonicTimeInNanoSeconds:(unsigned long long)a0 initialServerTimeInNanoSeconds:(unsigned long long)a1 isAccurate:(char)a2;

@end
