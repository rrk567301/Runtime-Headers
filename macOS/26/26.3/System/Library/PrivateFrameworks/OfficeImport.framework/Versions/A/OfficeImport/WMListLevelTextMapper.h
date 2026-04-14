@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {
    NSMutableArray *_tokens;
}

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)tokenCount;
- (id)initWithText:(id)a0 levelDescriptions:(id)a1 language:(int)a2;
- (id)listLevelTextForOutline:(id)a0;
- (id)token:(unsigned int)a0;

@end
