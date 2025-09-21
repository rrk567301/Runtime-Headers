@class NSString;
@protocol GEOMotionContextProvider, GEOMotionContextDelegate;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {
    id<GEOMotionContextProvider> _provider;
}

@property (weak, nonatomic) id<GEOMotionContextDelegate> delegate;
@property (readonly, nonatomic) unsigned long long motionType;
@property (readonly, nonatomic) unsigned long long exitType;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) char isMoving;
@property (readonly, nonatomic) char isWalking;
@property (readonly, nonatomic) char isRunning;
@property (readonly, nonatomic) char isCycling;
@property (readonly, nonatomic) char isDriving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMotionUpdatesWithProvider:(id)a0;
- (void)motionContextProvider:(id)a0 didUpdateMotion:(unsigned long long)a1 exitType:(unsigned long long)a2 confidence:(unsigned long long)a3;
- (void)stopMotionUpdates;

@end
