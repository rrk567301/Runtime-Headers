@class NSUndoManager, NSMutableDictionary, NSDate;

@interface SONewChatDisplayController : SOChatDisplayController {
    NSMutableDictionary *_knownIDStatus;
}

@property (copy, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) NSUndoManager *recipientBarUndoManager;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeParticipant:(id)a0;
- (BOOL)canBeRestored;
- (BOOL)representsNewChat;
- (BOOL)canAddRecipientHandles;
- (unsigned long long)validateIMHandle:(id)a0;
- (BOOL)canRemoveRecipientHandles;
- (BOOL)canInsertAttachmentsIntoInputLineContents;
- (BOOL)canInsertFilesAtURLs:(id)a0 intoInputLineContentsReturningError:(id *)a1;
- (void)removeIMHandleGUIDFromDanglingHandles:(id)a0;
- (void)chatWillChange:(id)a0;
- (unsigned long long)numberOfChatTranscriptItems;
- (id)chatTranscriptItemAtIndex:(unsigned long long)a0;
- (void)recipientsDidChange;
- (void)recipientHandlesDidChange;
- (void)chatDidChange;
- (void)chatDisplayNameDidChange;
- (id)chatTranscriptItems;
- (BOOL)filterEmptyChatOut;
- (long long)compareForConversationListSorting:(id)a0;
- (BOOL)_containsLegacyServiceHandles;
- (long long)knownIDSIDStatusForIMHandle:(id)a0;
- (id)_currentIDSIDs;
- (void)_replaceIDSRecipientsWithService:(id)a0;
- (void)_chatRegistryWillUnregisterChat:(id)a0;
- (void)_recalculateRecipientsFromIDSResults:(id)a0 allAddressesIMessageCapable:(BOOL)a1 checkedServer:(BOOL)a2 errorCode:(char)a3;

@end
