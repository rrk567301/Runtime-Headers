@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setValue:(double)a0;
- (double)value;
- (int)type;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
