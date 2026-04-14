@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction

@property (readonly, nonatomic) TIAutocorrectionList *candidates;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidates:(id)a0 keyboardState:(id)a1;

@end
