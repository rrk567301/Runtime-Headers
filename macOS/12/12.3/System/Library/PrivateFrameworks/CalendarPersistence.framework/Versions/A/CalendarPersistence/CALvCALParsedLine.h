@class NSString, NSMutableData, NSMutableDictionary;

@interface CALvCALParsedLine : NSObject {
    int _type;
    int _token_id;
    NSString *_keyword;
    NSMutableData *_content;
    NSMutableDictionary *_params;
    BOOL _usePalmD4Hooks;
}

+ (int)tokenizeNSStringKeyword:(id)a0 withType:(int *)a1;
+ (const struct { int x0; long long x1; int x2; int x3; id *x4; } *)lookupProperty:(int)a0;
+ (int)tokenizeKeyword:(const char *)a0 withType:(int *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (void)reset;
- (id)content;
- (int)tokenID;
- (id)keyword;
- (id)params;
- (void)setTokenID:(int)a0;
- (id)loadFromCString:(char *)a0 withParseState:(id)a1;
- (id)convertedContent;
- (void)setKeywordFromCString:(char *)a0;
- (void)setContentFromCString:(char *)a0;
- (void)setUsePalmD4Hooks:(BOOL)a0;

@end
