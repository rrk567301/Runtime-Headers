@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (void)setType:(int)a0;
- (void).cxx_destruct;
- (int)type;
- (id)init;
- (id)description;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (int)presetType;
- (void)setPresetType:(int)a0;

@end
