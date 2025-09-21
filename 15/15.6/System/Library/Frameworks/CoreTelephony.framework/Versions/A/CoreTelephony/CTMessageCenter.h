@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (void)dealloc;
- (id)init;
- (struct { int x0; int x1; })send:(id)a0;
- (int)incomingMessageCount;
- (char)isMmsConfigured;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)a0;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)a0;
- (void)addMessageOfType:(int)a0 toArray:(id)a1 withIdsFromArray:(id)a2;
- (id)allIncomingMessages;
- (id)decodeMessage:(id)a0;
- (void)emergencySessionIntentEnd:(id)a0;
- (void)emergencySessionIntentStart:(id)a0;
- (id)encodeMessage:(id)a0;
- (char)getCharacterCount:(long long *)a0 andMessageSplitThreshold:(long long *)a1 forSmsText:(id)a2;
- (char)getCharacterCountForSub:(id)a0 count:(long long *)a1 andMessageSplitThreshold:(long long *)a2 forSmsText:(id)a3;
- (id)incomingMessageWithId:(unsigned int)a0;
- (struct { int x0; int x1; })isDeliveryReportsEnabled:(char *)a0;
- (char)isMmsConfiguredForSub:(id)a0;
- (char)isMmsEnabled;
- (char)isMmsEnabledForSub:(id)a0;
- (struct { int x0; int x1; })isMmsEnabledForSub:(id)a0 enabled:(char *)a1;
- (struct { int x0; int x1; })send:(id)a0 withMoreToFollow:(char)a1;
- (char)sendBinarySMS:(id)a0 trackingID:(unsigned int *)a1;
- (struct { int x0; int x1; })sendMMS:(id)a0;
- (struct { int x0; int x1; })sendMMSFromData:(id)a0 messageId:(unsigned int)a1 subSlot:(long long)a2;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)a0 andReplaceData:(id *)a1;
- (struct { int x0; int x1; })sendSMS:(id)a0 withMoreToFollow:(char)a1 trackingID:(unsigned int *)a2;
- (char)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2;
- (char)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 trackingID:(unsigned int *)a3;
- (char)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withID:(unsigned int)a3;
- (char)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withMoreToFollow:(char)a3 withID:(unsigned int)a4;
- (char)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3;
- (char)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 trackingID:(unsigned int *)a4;
- (char)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withID:(unsigned int)a4;
- (char)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withMoreToFollow:(char)a4 withID:(unsigned int)a5;
- (void)setDeliveryReportsEnabled:(char)a0;
- (char)simulateDeferredMessage;
- (char)simulateSmsReceived:(id)a0;

@end
