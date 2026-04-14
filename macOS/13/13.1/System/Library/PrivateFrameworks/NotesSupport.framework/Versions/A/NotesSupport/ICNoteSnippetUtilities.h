@interface ICNoteSnippetUtilities : NSObject

+ (id)snippetForContent:(id)a0;
+ (id)titleForContent:(id)a0 truncated:(BOOL *)a1;
+ (id)stringByRemovingTitle:(id)a0 fromString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForTitleInContent:(id)a0 truncated:(BOOL *)a1;
+ (id)snippetAndTitleTrimCharacterSet;

@end
