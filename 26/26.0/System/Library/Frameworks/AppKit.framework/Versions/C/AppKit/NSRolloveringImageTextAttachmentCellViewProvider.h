@interface NSRolloveringImageTextAttachmentCellViewProvider : NSTextAttachmentCellViewProvider {
    BOOL _loaded;
}

- (void)loadView;
- (void)dealloc;

@end
