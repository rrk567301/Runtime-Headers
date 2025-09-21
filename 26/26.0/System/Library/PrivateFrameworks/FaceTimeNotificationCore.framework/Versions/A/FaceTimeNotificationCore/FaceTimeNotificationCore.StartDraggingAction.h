@interface FaceTimeNotificationCore.StartDraggingAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ frame;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ showingRTT;
    void /* unknown type, empty encoding */ showingLiveReply;
    void /* unknown type, empty encoding */ showingReceptionist;
    void /* unknown type, empty encoding */ showingKeypad;
    void /* unknown type, empty encoding */ keypadDialed;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
