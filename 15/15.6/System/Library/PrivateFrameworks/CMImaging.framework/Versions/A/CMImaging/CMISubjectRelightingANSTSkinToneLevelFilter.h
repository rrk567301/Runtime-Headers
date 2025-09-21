@class NSMutableDictionary;

@interface CMISubjectRelightingANSTSkinToneLevelFilter : NSObject {
    NSMutableDictionary *_historyPerGroupId;
    int _filterType;
    int _maxAgeFrames;
    int _maxFaceHistory;
    unsigned long long _frameCount;
}

- (void).cxx_destruct;
- (char)useHumanFaceObject:(id)a0 minFaceSize:(float)a1;
- (id)filterSkinToneLevels:(id)a0 minFaceSize:(float)a1;
- (id)initWithFilterType:(int)a0 maxAgeFrames:(int)a1 maxFaceHistory:(int)a2;

@end
