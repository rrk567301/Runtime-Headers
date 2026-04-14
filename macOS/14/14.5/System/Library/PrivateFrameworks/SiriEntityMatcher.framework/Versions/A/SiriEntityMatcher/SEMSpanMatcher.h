@class SEMSpanMatchResultInterpreter, NSObject;
@protocol SEMSkitAccessProvider;

@interface SEMSpanMatcher : NSObject {
    NSObject<SEMSkitAccessProvider> *_skitProvider;
    SEMSpanMatchResultInterpreter *_interpreter;
}

+ (void)initialize;
+ (id)indexMatcher;
+ (id)itemMatcher:(id)a0 tokenizer:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)indexLocaleWithUserId:(id)a0 error:(id *)a1;
- (id)matchSpans:(id)a0 userId:(id)a1 error:(id *)a2;
- (void)prewarmIndexWithUserId:(id)a0;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)indexLocale:(id *)a0;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (id)_matchSpans:(id)a0 userId:(id)a1 error:(id *)a2;
- (id)_searchSkit:(id)a0 userId:(id)a1 error:(id *)a2;
- (id)initWithSkitAccessProvider:(id)a0 resultInterpreter:(id)a1;
- (void)prewarmIndex;

@end
