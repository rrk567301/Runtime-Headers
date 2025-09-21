@class SKUniform, SKTexture, NSMutableSet, NSMutableArray, KissNode;

@interface ETKissMessage : ETMessage {
    SKTexture *_atlas;
    SKUniform *_atlasUniform;
    NSMutableArray *_points;
    NSMutableArray *_angles;
    NSMutableArray *_delays;
    NSMutableSet *_kissMarkNodes;
    double _lastKissTime;
    KissNode *_lastKiss;
    char _didDelegateWillStopPlaying;
    char _didDelegateDidStopPlaying;
}

+ (unsigned short)messageType;
+ (id)_kissColor;

- (id)init;
- (void).cxx_destruct;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (void)stopPlaying;
- (double)messageDuration;
- (void)displayInScene:(id)a0;
- (void)_displayKissAtPoint:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 leavesMark:(char)a2 inScene:(id)a3;
- (char)_hasKissesThatLeaveMark;
- (void)_initAtlas;
- (char)_leaveMarkAtDelay:(double)a0;
- (void)_notifyDelegateDidStopPlaying;
- (void)_notifyDelegateWillStopPlaying;
- (void)_setKissLeavesMark:(id)a0;
- (void)addKissAtNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 time:(double)a2 toScene:(id)a3;
- (id)messageTypeAsString;
- (char)reachedSizeLimit;
- (void)setParentMessage:(id)a0;

@end
