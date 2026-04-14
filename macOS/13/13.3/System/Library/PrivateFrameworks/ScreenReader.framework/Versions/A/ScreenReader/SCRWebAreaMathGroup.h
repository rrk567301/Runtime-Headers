@interface SCRWebAreaMathGroup : SCRWebAreaGroup

- (id)roleDescription;
- (BOOL)shouldMap;
- (BOOL)allowStatusEcho;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowTypeEcho;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;

@end
