@class NSString, NSImage, NSData, UTType, NSTextAttachmentView, NSFileWrapper;
@protocol NSTextAttachmentCell;

@interface NSTextAttachment : NSObject <NSTextAttachmentLayout, NSTextAttachmentContainer, NSSecureCoding> {
    NSData *_data;
    UTType *_uti;
    NSString *_cacheKey;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _layoutPadding;
    struct { unsigned char _allowsTextAttachmentView : 1; unsigned char _embeddingType : 4; unsigned char _standaloneAlignment : 3; unsigned char _allocatesTextContainer : 1; unsigned char _prefersOldAttachmentBounds : 1; unsigned char _prefersOldImageForBounds : 1; unsigned char _cellWasExplicitlySet : 1; unsigned char _ignoresOrientation : 1; unsigned char _allowsEditingContents : 1; } _taFlags;
    NSFileWrapper *_fileWrapperForContents;
    NSImage *_image;
    NSTextAttachmentView *_wrapperView;
    id<NSTextAttachmentCell> _attachmentCell;
    NSFileWrapper *_fileWrapper;
    id<NSTextAttachmentCell> _cell;
    struct { unsigned char cellWasExplicitlySet : 1; unsigned char ignoresOrientation : 1; unsigned char allowsEditingContents : 1; unsigned int  : 29; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTextAttachmentViewCell;
@property (copy) NSData *contents;
@property (copy) NSString *fileType;
@property (retain) NSImage *image;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain) NSFileWrapper *fileWrapper;
@property (retain) id<NSTextAttachmentCell> attachmentCell;
@property double lineLayoutPadding;
@property BOOL allowsTextAttachmentView;
@property (readonly) BOOL usesTextAttachmentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)textAttachmentViewProviderClassForFileType:(id)a0;
+ (id)imageCache;
+ (void)registerTextAttachmentViewProviderClass:(Class)a0 forFileType:(id)a1;
+ (Class)textAttachmentClassForFileType:(id)a0;
+ (void)registerTextAttachmentClass:(Class)a0 forFileType:(id)a1;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (id)contents;
- (id)fileType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)image;
- (id)contentView;
- (id)accessibilityLabel;
- (void)setContentView:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (id)_image;
- (id)initWithFileWrapper:(id)a0;
- (void)setFileType:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (Class)textAttachmentViewProviderClass;
- (id)_attachmentCell;
- (BOOL)allowsEditingContents;
- (id)_textAttachmentCell;
- (void)setEmbeddingType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (long long)embeddingType;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (void)_showAttachmentCell_iOS:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 characterIndex:(unsigned long long)a2;
- (id)_cacheKey;
- (id)_imageForUTType_macOS:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void)setStandaloneAlignment:(long long)a0;
- (void)_setAllocatesTextContainer:(BOOL)a0;
- (void)setAllowsEditingContents:(BOOL)a0;
- (void)_setupAPIPreferences;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (void)_invalidateWrapperView;
- (long long)standaloneAlignment;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (BOOL)ignoresOrientation;
- (long long)_characterIndexForLocation:(id)a0 textContainer:(id)a1;
- (void)_showAttachmentCell_macOS:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 characterIndex:(unsigned long long)a2;
- (void)_drawInAlignedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (BOOL)_allocatesTextContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)setIgnoresOrientation:(BOOL)a0;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 location:(id)a3 textContainer:(id)a4 applicationFrameworkContext:(long long)a5;

@end
