@class ABGroup, NSPasteboard;

@interface ABBookGroupCopyCommand : ABBookCommand {
    NSPasteboard *_pasteboard;
    ABGroup *_group;
}

- (void)execute;
- (void).cxx_destruct;
- (id)initWithPasteboard:(id)a0 group:(id)a1;
- (id)pasteboardData;

@end
