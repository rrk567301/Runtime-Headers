@class NSString, NSObject;
@protocol OS_dispatch_queue, IMDAutoReplyDelegate;

@interface IMDAvailabilityAutoReplier : NSObject <IMDAutoReplying>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)_localDeviceHasSIMMatchingChat:(id)a0;
- (char)_favoritesContainsParticipants:(id)a0;
- (id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(char)a0;
- (char)_chatEligibleForAvailabilityInformation:(id)a0;
- (char)_contactsContainsParticipants:(id)a0;
- (char)_deviceIsPhone;
- (char)_deviceSupportsSMSAutoReplyForChat:(id)a0;
- (char)_deviceSupportsiMessageAutoReply;
- (id)_dndHandleForIMDHandle:(id)a0;
- (char)_hasRecentOutgoingMessagesInChat:(id)a0;
- (char)_haveRecentUrgentMessageInGracePeriodForChat:(id)a0;
- (char)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)a0;
- (char)_isInDrivingFocus;
- (char)_isSMSChat:(id)a0;
- (id)_messageGuidsForMessages:(id)a0;
- (char)_messageIsSOS:(id)a0;
- (char)_messageItemSupportsBreakthroughNotification:(id)a0;
- (id)_messageItemsSupportingAvailabilityReplyFromItems:(id)a0;
- (id)_messageItemsSupportingBreakthroughNotifications:(id)a0;
- (char)_messageSenderEligibleToReceiveAvailabilityInformation:(id)a0;
- (void)_processMessagesForAvailabilityAutoReply:(id)a0 forIncomingMessageFromIDSID:(id)a1 inChat:(id)a2;
- (void)_sendDeliveredQuietelyForMessages:(id)a0 forIncomingMessageFromIDSID:(id)a1 inChat:(id)a2;
- (void)_sendTextAutoReplyIfNecessaryForMessages:(id)a0 withUrgentBreakthroughInstructions:(char)a1 inChat:(id)a2;
- (void)_sendTextAutoReplyToChat:(id)a0 withUrgentBreakthroughInstructions:(char)a1;
- (char)_shouldIgnoreDoNotDisturbForMessages:(id)a0 inChat:(id)a1;
- (char)_shouldSendTextAutoReplyForChat:(id)a0;
- (char)_sosTransportValidForMessage:(id)a0;
- (char)_sosURLMatchInText:(id)a0;
- (char)_userIsAvailableToHandle:(id)a0;
- (void)iterateRecentMessagesInChat:(id)a0 withBlock:(id /* block */)a1;
- (void)processMessages:(id)a0 inChat:(id)a1 fromIDSID:(id)a2;

@end
