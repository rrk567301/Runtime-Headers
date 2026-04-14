@class NSCache;

@interface MKWebContentBlocker : NSObject {
    NSCache *_regularExpressionCache;
}

+ (id)sharedBlocker;

- (void).cxx_destruct;
- (id)_regularExpression;
- (BOOL)shouldBlockLoadingOfURL:(id)a0;

@end
