@class NSString;

@interface _EARFullPayloadCorrector : NSObject {
    NSString *_language;
}

+ (void)initialize;

- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;
- (void)rescorePackage:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)rewritePackage:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)rewritePostITNOutput:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
