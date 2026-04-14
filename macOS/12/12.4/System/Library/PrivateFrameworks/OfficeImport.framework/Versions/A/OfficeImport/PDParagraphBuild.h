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
- (void)setAutoAdvanceTime:(double)a0;
- (void)setIsReversedParagraphOrder:(BOOL)a0;
- (void)setBuildLevel:(int)a0;
- (double)autoAdvanceTime;
- (BOOL)isReversedParagraphOrder;
- (int)buildLevel;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)addTimeNodeData;

@end
