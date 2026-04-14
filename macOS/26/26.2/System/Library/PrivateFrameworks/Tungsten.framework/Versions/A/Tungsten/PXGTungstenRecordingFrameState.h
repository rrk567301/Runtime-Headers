@class NSIndexSet, NSMutableIndexSet;

@interface PXGTungstenRecordingFrameState : NSObject {
    NSMutableIndexSet *_spriteIndexes;
}

@property (readonly, nonatomic) NSIndexSet *recordedSpriteIndexes;

- (void).cxx_destruct;
- (id)init;
- (void)addRecordedSpriteIndex:(unsigned int)a0;
- (void)addRecordedSpriteIndexes:(id)a0;

@end
