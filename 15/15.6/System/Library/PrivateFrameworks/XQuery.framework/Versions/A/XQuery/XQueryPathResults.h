@class NSMutableArray;

@interface XQueryPathResults : NSObject {
    id _firstResult;
    NSMutableArray *_array;
    struct __CFSet { } *_unique;
    char _isReversed;
    long long _type;
}

+ (id)pathResults;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)value:(char)a0;
- (void)add:(id)a0 context:(id)a1;
- (void)setIsReversed:(char)a0;

@end
