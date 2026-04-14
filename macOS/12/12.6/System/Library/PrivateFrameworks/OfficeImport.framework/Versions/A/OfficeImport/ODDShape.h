@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)adjustments;
- (int)presetType;
- (void)setPresetType:(int)a0;
- (void)addAdjustment:(id)a0;

@end
