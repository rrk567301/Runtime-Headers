@class ABPK2dSkeleton;

@interface ABPKBreakthroughResult : NSObject {
    ABPK2dSkeleton *_skeleton2D;
    unsigned int _trackingId;
    char _isFaceVisible;
    char _isRaisingHand;
    char _isWavingHand;
}

@property (readonly, nonatomic) ABPK2dSkeleton *skeleton2D;
@property (readonly, nonatomic) char isPoseValid;
@property (readonly, nonatomic) unsigned int trackingId;
@property (readonly, nonatomic) char isFaceVisible;
@property (readonly, nonatomic) char isRaisingHand;
@property (readonly, nonatomic) char isWavingHand;

- (id)init;
- (void).cxx_destruct;
- (int)overlayResultOnImage:(SEL)a0 withResult:(struct __CVBuffer { } *)a1 withColor:(struct __CVBuffer { } *)a2;
- (void)set2dSkeleton:(id)a0 isPoseValid:(char)a1 trackingId:(unsigned int)a2 isFaceVisible:(char)a3 isRaisingHand:(char)a4 isWavingHand:(char)a5;

@end
