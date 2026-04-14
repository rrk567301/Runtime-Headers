@class NSString, NSArray;

@interface SILManager.SILConstraints : SILManager.SILMgrCommonBase {
    void /* function */ constraintsFile;
    void /* unknown type, empty encoding */ steadyFrames;
    void /* function */ devices;
    void /* unknown type, empty encoding */ boundingBoxes;
    void /* unknown type, empty encoding */ fallbackInfo;
}

@property (nonatomic, copy) NSString *constraintsFile;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) float noticeableFrame;
@property (nonatomic, readonly) double minStaticLocationDuration;
@property (nonatomic, readonly) double timeToSteadyAsSeconds;
@property (nonatomic, readonly) double timeAsSteadyAsSeconds;
@property (nonatomic, readonly) double steadyOpacity;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isConstraintsForCurrentDevice;

@end
