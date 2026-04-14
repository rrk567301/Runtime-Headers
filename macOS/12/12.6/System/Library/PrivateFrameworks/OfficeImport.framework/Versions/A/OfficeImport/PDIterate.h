@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)a0;
- (double)value;
- (void)setValue:(double)a0;
- (BOOL)isBackwards;
- (BOOL)isValuePercentage;
- (void)setIsBackwards:(BOOL)a0;
- (void)setIsValuePercentage:(BOOL)a0;

@end
