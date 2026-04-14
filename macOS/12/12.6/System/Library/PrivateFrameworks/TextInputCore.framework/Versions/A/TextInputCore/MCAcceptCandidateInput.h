@class NSString, NSArray;

@interface MCAcceptCandidateInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *candidateText;
@property (readonly, copy, nonatomic) NSString *convertedInput;
@property (copy) NSArray *remainingMecabraInputs;
@property (copy) NSString *remainingInputString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCandidateText:(id)a0 convertedInput:(id)a1;
- (BOOL)canComposeNew:(id)a0;

@end
