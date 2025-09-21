@class NSURL, NSMutableData;

@interface WebFilterEvaluator : NSObject {
    unsigned long long _filterState;
    NSURL *_url;
    NSMutableData *_buffer;
}

+ (char)isManagedSession;
+ (id)createWithResponse:(id)a0;
+ (id)sharedBloomFilter;

- (void)dealloc;
- (id)addData:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)dataComplete;
- (int)filterState;
- (id)blockPageForPageWithTitle:(id)a0 origURL:(id)a1;
- (char)wasBlocked;

@end
