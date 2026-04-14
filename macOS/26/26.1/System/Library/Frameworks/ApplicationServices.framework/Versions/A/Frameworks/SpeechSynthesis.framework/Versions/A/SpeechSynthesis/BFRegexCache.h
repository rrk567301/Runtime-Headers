@class NSMutableDictionary;

@interface BFRegexCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)regexForString:(id)a0;
- (id)regexForString:(id)a0 atStart:(BOOL)a1;

@end
