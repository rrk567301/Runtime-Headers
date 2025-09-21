@interface PDIterate : NSObject {
    int mType;
    char mIsBackwards;
    char mIsPercentage;
    double mValue;
}

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (double)value;
- (void)setValue:(double)a0;
- (char)isBackwards;
- (void)setIsBackwards:(char)a0;
- (char)isValuePercentage;
- (void)setIsValuePercentage:(char)a0;

@end
