@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setType:(int)a0;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(double)a0;
- (unsigned long long)hash;
- (double)value;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
