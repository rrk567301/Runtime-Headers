@interface QCTableView : NSTableView {
    char _cancelEditing;
}

- (void)cancelOperation:(id)a0;
- (void)textDidEndEditing:(id)a0;

@end
