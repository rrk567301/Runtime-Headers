@interface XQueryRegEx : NSObject {
    unsigned long long _flags;
    void *_compiled;
}

+ (id)regExp:(id)a0 withFlags:(id)a1;

- (void)finalize;
- (void)dealloc;
- (id)tokenize:(id)a0;
- (id)matches:(id)a0;
- (id)hasMatch:(id)a0;
- (id)initExpr:(id)a0 withFlags:(id)a1;
- (id)replace:(id)a0 withString:(id)a1;

@end
