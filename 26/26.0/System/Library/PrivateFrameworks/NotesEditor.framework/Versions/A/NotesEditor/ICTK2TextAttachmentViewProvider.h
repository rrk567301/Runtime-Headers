@class ICSearchResultRegexMatchFinder, ICAttachmentView;
@protocol NSTextLocation;

@interface ICTK2TextAttachmentViewProvider : NSTextAttachmentViewProvider

@property (readonly, nonatomic) ICAttachmentView *attachmentViewIfLoaded;
@property (nonatomic) BOOL viewLoaded;
@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (void)loadView;
- (void)setLocation:(id)a0;
- (id)location;
- (void).cxx_destruct;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;

@end
