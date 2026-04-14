@interface SCRWebAreaMathGroup : SCRWebAreaGroup

- (id)roleDescription;
- (BOOL)shouldMap;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)allowStatusEcho;
- (BOOL)allowTypeEcho;

@end
