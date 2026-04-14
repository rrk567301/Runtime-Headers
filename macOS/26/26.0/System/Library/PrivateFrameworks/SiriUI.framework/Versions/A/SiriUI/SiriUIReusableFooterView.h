@class NSString, SiriUISnippetViewController;

@interface SiriUIReusableFooterView : NSView <NSCollectionViewElement, SiriUIReusableView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;

- (BOOL)isFlipped;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
