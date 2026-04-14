@class NSString;

@interface MCDeleteInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *deletedText;
@property (readonly, nonatomic) BOOL deleteBySyllable;
@property (readonly, nonatomic) BOOL shouldDeleteAcceptCandidateInput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithDeletedText:(id)a0 deleteBySyllable:(BOOL)a1 shouldDeleteAcceptCandidateInput:(BOOL)a2;

@end
