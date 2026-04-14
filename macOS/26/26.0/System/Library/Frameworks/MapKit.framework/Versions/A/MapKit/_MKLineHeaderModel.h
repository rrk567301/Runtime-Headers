@class NSView, NSDictionary, NSMutableArray;

@interface _MKLineHeaderModel : NSObject {
    NSMutableArray *_tokens;
}

@property (weak, nonatomic) NSView *ownerView;
@property (copy, nonatomic) NSDictionary *fontAttribute;
@property (copy, nonatomic) id /* block */ colorProvider;
@property (nonatomic) BOOL shouldUseEmptyPlaceholder;

- (void)insertToken:(id)a0 atIndex:(unsigned long long)a1;
- (void)addToken:(id)a0;
- (id)init;
- (id)description;
- (void)removeToken:(id)a0;
- (void).cxx_destruct;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;

@end
