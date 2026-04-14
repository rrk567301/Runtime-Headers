@class NSMutableArray;

@interface XQueryPathResults : NSObject {
    id _firstResult;
    NSMutableArray *_array;
    struct __CFSet { } *_unique;
    BOOL _isReversed;
    long long _type;
}

+ (id)pathResults;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)setIsReversed:(BOOL)a0;
- (id)value:(BOOL)a0;
- (void)add:(id)a0 context:(id)a1;

@end
