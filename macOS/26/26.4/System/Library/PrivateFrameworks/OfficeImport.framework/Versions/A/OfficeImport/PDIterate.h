@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (double)value;
- (void)setValue:(double)a0;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
