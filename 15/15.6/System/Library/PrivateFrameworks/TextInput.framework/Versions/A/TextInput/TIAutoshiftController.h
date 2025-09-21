@class TITextInputTraits;

@interface TIAutoshiftController : NSObject

@property (readonly, nonatomic) TITextInputTraits *textInputTraits;
@property (nonatomic, getter=isEnabled) char enabled;

- (void).cxx_destruct;
- (unsigned long long)actionForDocumentState:(id)a0 inputMangerState:(id)a1;
- (id)initWithTextInputTraits:(id)a0;
- (char)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)a0 inputManagerState:(id)a1;

@end
