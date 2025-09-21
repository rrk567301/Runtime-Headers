@class AVHapticClient;

@interface AVHapticPlayerChannel : NSObject {
    unsigned long long _behavior;
}

@property unsigned long long chanID;
@property (weak) AVHapticClient *client;
@property unsigned long long eventBehavior;

- (void).cxx_destruct;
- (void)invalidate;
- (char)clearEvents:(double)a0 error:(id *)a1;
- (id)initWithChannelID:(id)a0 client:(id)a1;
- (char)resetAtTime:(double)a0 error:(id *)a1;
- (char)scheduleParameterCurve:(unsigned long long)a0 curve:(id)a1 atTime:(double)a2 error:(id *)a3;
- (char)sendEvents:(id)a0 atTime:(double)a1 error:(id *)a2;
- (char)sendEvents:(id)a0 withImmediateParameters:(id)a1 atTime:(double)a2 error:(id *)a3;
- (char)setParameter:(unsigned long long)a0 value:(float)a1 atTime:(double)a2 error:(id *)a3;

@end
