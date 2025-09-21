@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction

@property (readonly, nonatomic) TIAutocorrectionList *candidates;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidates:(id)a0 keyboardState:(id)a1;

@end
