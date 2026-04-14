@class NSError, WFFileRepresentation;

@interface ContentKit.WFiWorkPDFConverter : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

+ (BOOL)canHandleFile:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)convertToPDF:(WFFileRepresentation *)a0 completionHandler:(void (^)(WFFileRepresentation *, NSError *))a1;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;

@end
