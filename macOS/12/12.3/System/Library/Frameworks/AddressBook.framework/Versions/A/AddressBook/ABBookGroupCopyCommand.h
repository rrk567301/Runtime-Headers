@class ABGroup, NSPasteboard;

@interface ABBookGroupCopyCommand : ABBookCommand {
    NSPasteboard *_pasteboard;
    ABGroup *_group;
}

- (void).cxx_destruct;
- (void)execute;
- (id)pasteboardData;
- (id)initWithPasteboard:(id)a0 group:(id)a1;

@end
