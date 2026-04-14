@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (int)type;
- (void)setValue:(double)a0;
- (unsigned long long)hash;
- (double)value;
- (void)setType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
