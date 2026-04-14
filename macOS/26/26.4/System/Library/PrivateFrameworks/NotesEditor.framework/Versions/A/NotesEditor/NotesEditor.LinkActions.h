@interface NotesEditor.LinkActions : NSObject

+ (void)removeLinkAttachment:(id)a0 from:(id)a1 at:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)removeLinkFromTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)removeLinksFromTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)init;

@end
