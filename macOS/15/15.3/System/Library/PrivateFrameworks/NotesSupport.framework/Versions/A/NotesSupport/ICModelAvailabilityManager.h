@interface ICModelAvailabilityManager : NSObject {
    void /* unknown type, empty encoding */ generalASRAvailabilityWasGenerated;
    void /* unknown type, empty encoding */ cachedSupportsGreymatter;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _generalASRAvailable;
}

@property (class, nonatomic, retain) ICModelAvailabilityManager *sharedInstance;

@property (nonatomic, readonly) BOOL supportsCallRecording;
@property (nonatomic, readonly) BOOL supportsCallTranscription;
@property (nonatomic, readonly) BOOL supportsGreymatter;
@property (nonatomic, readonly) BOOL supportsGeneralASR;

- (id)init;
- (void).cxx_destruct;
- (void)determineASRAvailability:(void (^)(void))a0;

@end
