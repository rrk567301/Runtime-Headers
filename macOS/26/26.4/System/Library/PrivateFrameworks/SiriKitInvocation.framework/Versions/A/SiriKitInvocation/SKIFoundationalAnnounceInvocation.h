@interface SKIFoundationalAnnounceInvocation : NSObject

+ (void)updateDict:(id)a0 withAnnouncePayload:(id)a1;
+ (id)announceBinaryOutcome:(id)a0 announcePayload:(id)a1;
+ (id)announcePayloadFromUserData:(id)a0;
+ (id)binaryOutcomeAnnounceRequestFromUserData:(id)a0;
+ (void)updateDict:(id)a0 withBinaryOutcomeAnnounceRequest:(id)a1;
+ (id)updateStartLocalRequest:(id)a0 withNewAnnouncePayload:(id)a1;

@end
