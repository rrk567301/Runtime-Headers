@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (void)setValue:(double)a0;
- (double)value;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
