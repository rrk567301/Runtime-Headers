@class NSString;

@interface ICTTAttachment : NSObject <ICTTAttachment>

@property (copy, nonatomic) NSString *attachmentIdentifier;
@property (copy, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isAttachment:(id)a0 equalToModelComparable:(id)a1;
+ (char)isInlineAttachment:(id)a0;
+ (char)typeUTIIsInlineAttachment:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileType;
- (id)adaptiveImageGlyph;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (char)_isEmojiImage;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4 acceptsViewProvider:(char)a5;
- (long long)standaloneAlignment;
- (char)isEqualToModelComparable:(id)a0;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;

@end
