@interface MediaContinuityKit.AVConferenceBackedStreamInput : NSObject <AVCStreamInputDelegate> {
    void /* unknown type, empty encoding */ streamInput;
    void /* unknown type, empty encoding */ isStarted;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)serverDidDie;

@end
