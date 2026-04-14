@interface IMAPMessageSetFormatter : NSObject

+ (id)newMessageSetForIndexSet:(id)a0;
+ (id)newMessageSetForNumbers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)newMessageSetForRange:(struct { unsigned long long x0; unsigned long long x1; })a0;

@end
