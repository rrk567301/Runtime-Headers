@class NSString, NSMutableData, NSMutableDictionary;

@interface VCSParsedLine : NSObject {
    NSString *_keyword;
    NSMutableData *_content;
    NSMutableDictionary *_params;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long tokenID;
@property (nonatomic) char usePalmD4Hooks;

+ (const struct { long long x0; unsigned long long x1; unsigned long long x2; char x3; id x4; } *)lookupProperty:(long long)a0;
+ (long long)tokenizeKeyword:(const char *)a0 withType:(unsigned long long *)a1;
+ (long long)tokenizeNSStringKeyword:(id)a0 withType:(unsigned long long *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)content;
- (id)keyword;
- (id)params;
- (id)loadFromCString:(char *)a0 withParseState:(id)a1;
- (id)convertedContent;
- (void)setContentFromCString:(char *)a0;
- (void)setKeywordFromCString:(char *)a0;

@end
