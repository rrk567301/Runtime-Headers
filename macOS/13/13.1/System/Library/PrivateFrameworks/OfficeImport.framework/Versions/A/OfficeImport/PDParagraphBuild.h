@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (unsigned long long)timeNodeDataListCount;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)addTimeNodeData;
- (id)timeNodeDataList;
- (double)autoAdvanceTime;
- (void)setAutoAdvanceTime:(double)a0;
- (BOOL)isReversedParagraphOrder;
- (void)setIsReversedParagraphOrder:(BOOL)a0;
- (int)buildLevel;
- (void)setBuildLevel:(int)a0;

@end
