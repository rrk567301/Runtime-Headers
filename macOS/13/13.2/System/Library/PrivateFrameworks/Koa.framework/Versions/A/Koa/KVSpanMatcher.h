@class KVSpanMatchResultInterpreter, NSObject;
@protocol KVSkitAccessProvider;

@interface KVSpanMatcher : NSObject {
    NSObject<KVSkitAccessProvider> *_skitProvider;
    KVSpanMatchResultInterpreter *_interpreter;
}

+ (void)initialize;
+ (id)indexMatcher;
+ (id)itemMatcher:(id)a0 locale:(id)a1;
+ (id)itemMatcher:(id)a0 tokenizer:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)matchSpans:(id)a0 userId:(id)a1 error:(id *)a2;
- (id)indexLocaleWithUserId:(id)a0 error:(id *)a1;
- (void)prewarmIndexWithUserId:(id)a0;
- (id)initWithSkitAccessProvider:(id)a0 resultInterpreter:(id)a1;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (id)indexLocaleWithError:(id *)a0;
- (id)_searchSkit:(id)a0 userId:(id)a1 error:(id *)a2;

@end
