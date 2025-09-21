@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {
    char mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (int)adjustValueAtIndex:(unsigned int)a0;
- (unsigned long long)adjustValueCount;
- (id)adjustValues;
- (id)equivalentCustomGeometry;
- (char)hasAdjustValueAtIndex:(unsigned int)a0;
- (char)isEscher;
- (void)setAdjustValue:(int)a0 atIndex:(unsigned int)a1;
- (void)setIsEscher:(char)a0;

@end
