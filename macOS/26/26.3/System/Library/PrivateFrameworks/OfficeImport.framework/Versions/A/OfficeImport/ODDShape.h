@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (void)setType:(int)a0;
- (int)type;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (int)presetType;
- (void)setPresetType:(int)a0;

@end
