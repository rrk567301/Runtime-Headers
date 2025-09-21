@protocol _TIUITextChecking;

@interface TITextChecker : NSObject

@property (readonly, nonatomic) id<_TIUITextChecking> checker;

+ (id)_UITextCheckerWithAsynchronousLoading:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(char)a3 correction:(id *)a4;
- (char)doneLoading;
- (id)initWithAsynchronousLoading:(char)a0;

@end
