@interface SnippetUI_Proto.ProtoVisualResponseProvider : NSObject

+ (void)preWarm:(id)a0;
+ (void)setPatternId:(id)a0 forViewId:(id)a1;
+ (id)transformModel:(id)a0 mode:(long long)a1 currentIdiom:(long long)a2;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)viewControllerFor:(id)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (id)viewControllerForModel:(id)a0 mode:(long long)a1;
- (id)viewForModel:(id)a0 mode:(long long)a1 overload:(long long)a2;

@end
