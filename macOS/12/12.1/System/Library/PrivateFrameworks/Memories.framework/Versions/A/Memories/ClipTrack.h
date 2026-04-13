@class NSMutableArray;

@interface ClipTrack : NSObject {
    int _clipType;
    int _trackID;
    NSMutableArray *_clips;
}

+ (id)nameForClipType:(int)a0 trackID:(int)a1;

- (void).cxx_destruct;
- (id)clips;
- (void)addClip:(id)a0;
- (int)clipType;
- (void)removeClip:(id)a0;
- (id)initWithClipType:(int)a0 trackID:(int)a1;
- (id)trackName;
- (void)insertClip:(id)a0 atIndex:(long long)a1;
- (long long)indexOfClip:(id)a0;

@end
