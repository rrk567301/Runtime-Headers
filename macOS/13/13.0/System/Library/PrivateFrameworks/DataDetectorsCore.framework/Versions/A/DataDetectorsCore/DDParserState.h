@class NSMutableArray;

@interface DDParserState : NSObject {
    unsigned long long _totalNumberOfSamples;
    struct __CFDictionary { } *_weightFromChild;
}

@property BOOL isRootState;
@property (readonly) NSMutableArray *children;
@property long long index;
@property long long numberOfSamples;

- (void)dealloc;
- (id)description;
- (void)addChild:(id)a0;
- (id)initWithStateIndex:(long long)a0;
- (void)addSampleFrom:(id)a0;
- (void)setTotalNumberOfSamples:(unsigned long long)a0;
- (double)ratioOfTotalSamples;

@end
