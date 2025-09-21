@class NSString;

@interface CNAuthorizationContextTestDouble : NSObject <CNAuthorizationContext>

@property char isNotesAccessGranted;
@property char isAddressingGrammarAccessGranted;
@property char isClientFirstOrSecondParty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
