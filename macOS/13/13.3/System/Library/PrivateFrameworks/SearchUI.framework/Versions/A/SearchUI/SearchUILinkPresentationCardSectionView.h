@class LPLinkView, SFLinkPresentationCardSection, NSClickGestureRecognizer;

@interface SearchUILinkPresentationCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NSClickGestureRecognizer *linkPresentationTapped;
@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) SFLinkPresentationCardSection *section;

+ (id)fallbackMetadataWithURL:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (void)fetchMetadataFromMessagesWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)updateWithRowModel:(id)a0;

@end
