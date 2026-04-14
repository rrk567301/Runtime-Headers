@class NSURL, NSMutableData;

@interface WebFilterEvaluator : NSObject {
    unsigned long long _filterState;
    NSURL *_url;
    NSMutableData *_buffer;
}

+ (id)createWithResponse:(id)a0;
+ (BOOL)isManagedSession;
+ (id)sharedBloomFilter;

- (id)addData:(id)a0;
- (void)dealloc;
- (id)initWithResponse:(id)a0;
- (id)blockPageForPageWithTitle:(id)a0 origURL:(id)a1;
- (id)dataComplete;
- (int)filterState;
- (BOOL)wasBlocked;

@end
