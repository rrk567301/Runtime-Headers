@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    char mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (int)buildLevel;
- (char)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)a0;
- (void)setBuildLevel:(int)a0;
- (void)setIsReversedParagraphOrder:(char)a0;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;

@end
