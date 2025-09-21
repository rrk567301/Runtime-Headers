@class NSString;

@interface MCDeleteInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *deletedText;
@property (readonly, nonatomic) char deleteBySyllable;
@property (readonly, nonatomic) char shouldDeleteAcceptCandidateInput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (char)canComposeNew:(id)a0;
- (id)initWithDeletedText:(id)a0 deleteBySyllable:(char)a1 shouldDeleteAcceptCandidateInput:(char)a2;

@end
