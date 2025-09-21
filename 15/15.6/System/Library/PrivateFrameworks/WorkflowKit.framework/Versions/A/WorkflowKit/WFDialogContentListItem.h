@class NSString, NSData, WFImage, WFContentItem;

@interface WFDialogContentListItem : WFDialogListItem <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) WFContentItem *contentItem;
@property (retain, nonatomic) NSData *archivedContentItem;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (nonatomic) char hideSubtitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_loadContentItemWithCompletion:(id /* block */)a0;
- (id)initWithContentItem:(id)a0 encodedTypedValue:(id)a1 selected:(char)a2 hideSubtitle:(char)a3;
- (id)initWithContentItem:(id)a0 encodedTypedValue:(id)a1 selected:(char)a2 serializedPossibleState:(id)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 selected:(char)a3 contentItem:(id)a4 encodedTypedValue:(id)a5 hideSubtitle:(char)a6 serializedPossibleState:(id)a7;
- (char)loadAltTextWithCompletion:(id /* block */)a0;
- (char)loadImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (char)loadSubtitleWithCompletion:(id /* block */)a0;

@end
