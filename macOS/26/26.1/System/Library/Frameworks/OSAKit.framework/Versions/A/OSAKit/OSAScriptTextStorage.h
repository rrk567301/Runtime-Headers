@class OSAScriptController;

@interface OSAScriptTextStorage : OSATextStorage {
    OSAScriptController *_controller;
}

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)undoManager;
- (void)setController:(id)a0;
- (id)controller;
- (void)encodeWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;

@end
