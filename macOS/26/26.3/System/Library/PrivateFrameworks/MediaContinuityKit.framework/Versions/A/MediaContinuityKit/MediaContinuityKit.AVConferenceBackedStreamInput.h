@interface MediaContinuityKit.AVConferenceBackedStreamInput : NSObject <AVCStreamInputDelegate> {
    void /* unknown type, empty encoding */ streamInput;
    void /* unknown type, empty encoding */ isStarted;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)serverDidDie;

@end
