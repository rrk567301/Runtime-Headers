@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

@interface CNSaveRequestVisitationTask : CNTask

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithSaveRequest:(id)a0 visitor:(id)a1 factory:(id)a2;
- (void)sendAddedContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendDeletedContactEvents;
- (void)sendAddedGroupEvents;
- (void)sendUpdatedGroupEvents;
- (void)sendDeletedGroupEvents;
- (void)sendAddMemberToGroupEvents;
- (void)sendRemoveMemberFromGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendLinkContactsEvents;
- (void)sendUnlinkContactEvents;
- (void)sendPreferredContactForNameEvents;
- (void)sendPreferredContactForImageEvents;
- (void)sendDifferentMeCardEvent;

@end
