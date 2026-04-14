@interface EDDataDetectionUtilities : NSObject

+ (id)log;
+ (void)_lexiconEnumerateEntries:(struct _LXLexicon { } *)a0 forString:(id)a1 completionHandler:(id /* block */)a2;
+ (id)extractOneTimeCode:(id)a0 withSubject:(id)a1;
+ (BOOL)_isRealWord:(id)a0 locale:(id)a1;
+ (id)detectOneTimeCodeWithDataDetectors:(id)a0;
+ (BOOL)isRealWord:(id)a0;

@end
