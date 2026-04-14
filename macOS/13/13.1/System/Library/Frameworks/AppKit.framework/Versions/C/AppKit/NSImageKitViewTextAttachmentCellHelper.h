@interface NSImageKitViewTextAttachmentCellHelper : NSViewTextAttachmentCellHelper {
    unsigned long long _charIndex;
}

- (void)dealloc;
- (void)viewFrameChanged:(id)a0;
- (id)initWithView:(id)a0 layoutManager:(id)a1 characterIndex:(unsigned long long)a2 attachmentCell:(id)a3;
- (unsigned long long)characterIndex;
- (void)setCharacterIndex:(unsigned long long)a0;

@end
