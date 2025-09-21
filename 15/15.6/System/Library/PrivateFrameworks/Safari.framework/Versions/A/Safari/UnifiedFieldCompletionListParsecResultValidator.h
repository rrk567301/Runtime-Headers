@class NSString, NSMutableSet;

@interface UnifiedFieldCompletionListParsecResultValidator : NSObject <UnifiedFieldCompletionListParsecResultValidation> {
    NSMutableSet *_validatedResultIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)_isSFSearchResultValid:(id)a0;
- (char)_validateSimpleResult:(id)a0 withSession:(id)a1;
- (void)resetValidationState;
- (char)validateParsecResult:(id)a0 withSession:(id)a1;

@end
