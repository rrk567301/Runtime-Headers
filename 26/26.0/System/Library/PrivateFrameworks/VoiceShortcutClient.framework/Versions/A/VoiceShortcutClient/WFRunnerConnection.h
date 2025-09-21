@interface WFRunnerConnection : NSObject {
    void /* unknown type, empty encoding */ policy;
    void /* unknown type, empty encoding */ languageIdentifier;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ connection;
    void /* function */ onInterruption;
    void /* function */ onInvalidation;
}

@property (nonatomic, readonly) long long targetType;
@property (nonatomic, copy) id /* block */ onInterruption;
@property (nonatomic, copy) id /* block */ onInvalidation;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)asyncRunnerWithReason:(id)a0 error:(id *)a1;
- (id)initWithRunDescriptor:(id)a0 host:(id)a1 onInterruption:(id /* block */)a2 onInvalidation:(id /* block */)a3 languageIdentifier:(id)a4;
- (id)syncRunnerWithReason:(id)a0 error:(id *)a1;

@end
