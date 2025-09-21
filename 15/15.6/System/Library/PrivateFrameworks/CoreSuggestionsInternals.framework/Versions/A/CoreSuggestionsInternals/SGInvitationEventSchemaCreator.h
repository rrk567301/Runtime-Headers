@class NSString;

@interface SGInvitationEventSchemaCreator : NSObject <SGEventSchemaCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)checkCompletenessOfSchema:(id)a0;
- (id)processDURawEvent:(id)a0;
- (char)reservationIDPresentInEventSchema:(id)a0;

@end
