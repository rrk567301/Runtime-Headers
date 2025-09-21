@interface WFEmailAddressSubstitutableState : WFContactHandleSubstitutableState

- (char)reinterpretsStringsAsContactHandlesFromVariable:(char)a0;
- (id)stringInterpretedAsContactHandle:(id)a0 allowsCustomHandles:(char)a1;
- (id)valueItemClasses;

@end
