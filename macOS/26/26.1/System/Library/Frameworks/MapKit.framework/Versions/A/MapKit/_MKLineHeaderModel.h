@class NSView, NSDictionary, NSMutableArray;

@interface _MKLineHeaderModel : NSObject {
    NSMutableArray *_tokens;
}

@property (weak, nonatomic) NSView *ownerView;
@property (copy, nonatomic) NSDictionary *fontAttribute;
@property (copy, nonatomic) id /* block */ colorProvider;
@property (nonatomic) BOOL shouldUseEmptyPlaceholder;

- (void)addToken:(id)a0;
- (void)removeToken:(id)a0;
- (void)insertToken:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;

@end
