@class TIKeyboardSecureCandidateRenderTraits;

@interface TIRecentInputsSecureContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TIKeyboardSecureCandidateRenderTraits *focusedLabelRenderTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateRenderTraits *unfocusedLabelRenderTraits;

+ (id)contextWithFocusedTraits:(id)a0 unfocusedTraits:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
