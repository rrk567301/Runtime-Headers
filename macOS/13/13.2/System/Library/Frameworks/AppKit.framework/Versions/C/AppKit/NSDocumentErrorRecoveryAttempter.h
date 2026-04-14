@class NSDocument, NSIndexSet;

@interface NSDocumentErrorRecoveryAttempter : NSObject {
    NSDocument *_document;
    id _wrappedRecoveryAttempter;
    id /* block */ _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    id /* block */ _docModalRecoveryAttempter;
    id /* block */ _appModalRecoveryAttempter;
    id /* block */ _recoveryCancelerOrNil;
    NSIndexSet *_customOptionIndexes;
}

- (void)dealloc;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (id)initWithDocument:(id)a0 wrappedRecoveryAttempter:(id)a1 continuer:(id /* block */)a2;
- (id)initWithDocument:(id)a0 wrappedRecoveryAttempter:(id)a1 customOptionIndexes:(id)a2 docModalRecoveryAttempter:(id /* block */)a3 appModalRecoveryAttempter:(id /* block */)a4 recoveryCanceler:(id /* block */)a5;
- (id)initWithDocument:(id)a0 silentRecoveryOptionIndex:(unsigned long long)a1 docModalRecoveryAttempter:(id /* block */)a2 appModalRecoveryAttempter:(id /* block */)a3 recoveryCanceler:(id /* block */)a4;
- (void)attemptSilentRecoveryFromError:(id)a0 thenContinue:(id /* block */)a1;
- (BOOL)attemptSilentRecoveryFromError:(id)a0 error:(id *)a1;
- (void)cancelRecovery;

@end
