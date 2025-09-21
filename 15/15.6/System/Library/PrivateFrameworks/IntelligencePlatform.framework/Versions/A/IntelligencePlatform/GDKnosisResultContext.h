@class _TtC20IntelligencePlatform26_GDSwiftGraphObjectContext;

@interface GDKnosisResultContext : GDGraphObjectContext {
    void /* unknown type, empty encoding */ knosisResultContext;
    void /* unknown type, empty encoding */ gdSwiftGraphObjectContext;
}

@property (nonatomic, readonly) _TtC20IntelligencePlatform26_GDSwiftGraphObjectContext *context;

- (id)init;
- (void).cxx_destruct;
- (id)answers;
- (char)enumerateAnswersForEntityIdentifier:(id)a0 block:(id /* block */)a1 error:(id *)a2;
- (char)enumerateAnswersUsingBlock:(id /* block */)a0 error:(id *)a1;

@end
