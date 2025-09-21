@class NSMutableArray;
@protocol VCMediaAnalyzerSource;

@interface VCMediaAnalyzerManagerStreamTokenClientList : NSObject {
    long long _streamToken;
}

@property (readonly, nonatomic) id<VCMediaAnalyzerSource> mediaAnalyzerSource;
@property (readonly, nonatomic) NSMutableArray *clientContextList;

+ (long long)streamTokenFromClientContext:(id)a0;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 mediaAnalyzerSource:(id)a1;
- (id)newClientContext;
- (void)removeClientContext:(id)a0;

@end
