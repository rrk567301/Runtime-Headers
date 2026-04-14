@interface CallIntelligence.WrappedAVCAnsweringMachineDelegate : NSObject <AVCAnsweringMachineDelegate> {
    void /* unknown type, empty encoding */ onAnsweringMachineDidFinishAnnouncement;
}

- (id)init;
- (void).cxx_destruct;
- (void)answeringMachine:(id)a0 didFinishAnnouncement:(BOOL)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStop:(BOOL)a1 messageRecordingURL:(id)a2 error:(id)a3;
- (void)serverDidDisconnectForAnsweringMachine:(id)a0;

@end
