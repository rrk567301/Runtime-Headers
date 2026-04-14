@interface _LTDLLMBasedTranslationStatus : NSObject {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) BOOL hasObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (BOOL)canReportAILanguagesForObserver:(id)a0;
- (id)observationsWithLocaleRanks:(id)a0;
- (void)removeObserverWithID:(id)a0;

@end
