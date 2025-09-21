@interface VUIDocumentUIConfigurationModal : VUIDocumentUIConfiguration

@property (nonatomic, getter=isModalOverModalAllowed) char modalOverModalAllowed;
@property (nonatomic, getter=shouldPresentOnPresentingViewController) char presentOnPresentingVC;
@property (nonatomic) char hasMaterialBackground;

@end
