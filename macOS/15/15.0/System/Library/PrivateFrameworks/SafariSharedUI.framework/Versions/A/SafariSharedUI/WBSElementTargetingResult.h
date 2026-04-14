@class _WKTargetedElementInfo, NSMutableSet;

@interface WBSElementTargetingResult : NSObject {
    NSMutableSet *_elements;
}

@property (readonly, nonatomic) _WKTargetedElementInfo *target;
@property (readonly, nonatomic) long long urlSimilarity;

- (void).cxx_destruct;
- (void)addElement:(id)a0;
- (BOOL)hasSimilarGeometry;
- (void)hasSimilarRenderedText:(id /* block */)a0;
- (id)initWithTarget:(id)a0 element:(id)a1;

@end
