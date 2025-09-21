@class NSString, AVHapticPlayerChannel;

@interface PatternPlayer : PatternPlayerBase <CHHapticPatternPlayerExtended> {
    AVHapticPlayerChannel *_channel;
}

@property char isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)cancelAndReturnError:(id *)a0;
- (void)clearExternalResources:(id)a0;
- (void)doSetMute:(char)a0;
- (id)initWithPlayable:(id)a0 engine:(id)a1 privileged:(char)a2 error:(id *)a3;
- (id)processImmediateParameters:(id)a0;
- (void)releaseExternalResources:(id)a0 events:(id)a1;
- (char)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;
- (char)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (char)startAtTime:(double)a0 error:(id *)a1;
- (char)startAtTime:(double)a0 withImmediateParameters:(id)a1 error:(id *)a2;
- (char)stopAtTime:(double)a0 error:(id *)a1;

@end
