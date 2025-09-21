@interface NSRolloveringImageTextAttachmentCellViewProvider : NSTextAttachmentCellViewProvider {
    char _loaded;
}

- (void)dealloc;
- (void)loadView;

@end
