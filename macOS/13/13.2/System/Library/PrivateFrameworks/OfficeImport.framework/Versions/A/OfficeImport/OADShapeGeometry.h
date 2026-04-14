@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (id)equivalentCustomGeometry;
- (BOOL)isEscher;
- (void)setIsEscher:(BOOL)a0;
- (void)setAdjustValue:(int)a0 atIndex:(unsigned int)a1;
- (int)adjustValueAtIndex:(unsigned int)a0;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)a0;
- (unsigned long long)adjustValueCount;
- (id)adjustValues;

@end
