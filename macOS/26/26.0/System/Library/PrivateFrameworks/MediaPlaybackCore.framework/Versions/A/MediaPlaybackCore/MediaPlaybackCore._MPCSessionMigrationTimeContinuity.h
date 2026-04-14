@class NSString;

@interface MediaPlaybackCore._MPCSessionMigrationTimeContinuity : NSObject {
    void /* unknown type, empty encoding */ playbackRate;
    void /* unknown type, empty encoding */ referencePosition;
    void /* unknown type, empty encoding */ referenceTime;
    void /* unknown type, empty encoding */ scheduledRateChangeTime;
    void /* unknown type, empty encoding */ isLive;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
