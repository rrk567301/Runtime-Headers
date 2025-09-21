@class NSUndoManager, NSMutableDictionary, NSDate;

@interface SONewChatDisplayController : SOChatDisplayController {
    NSMutableDictionary *_knownIDStatus;
}

@property (copy, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) NSUndoManager *recipientBarUndoManager;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)removeParticipant:(id)a0;
- (char)canBeRestored;
- (void)chatWillChange:(id)a0;
- (void)_chatRegistryWillUnregisterChat:(id)a0;
- (char)_containsLegacyServiceHandles;
- (id)_currentIDSIDs;
- (void)_recalculateRecipientsFromIDSResults:(id)a0 allAddressesIMessageCapable:(char)a1 checkedServer:(char)a2 errorCode:(long long)a3;
- (void)_replaceIDSRecipientsWithService:(id)a0;
- (char)canAddRecipientHandles;
- (char)canInsertAttachmentsIntoInputLineContents;
- (char)canInsertFilesAtURLs:(id)a0 intoInputLineContentsReturningError:(id *)a1;
- (char)canRemoveRecipientHandles;
- (void)chatDidChange;
- (void)chatDisplayNameDidChange;
- (id)chatTranscriptItemAtIndex:(unsigned long long)a0;
- (id)chatTranscriptItems;
- (long long)compareForConversationListSorting:(id)a0;
- (char)filterEmptyChatOut;
- (long long)knownIDSIDStatusForIMHandle:(id)a0;
- (unsigned long long)numberOfChatTranscriptItems;
- (void)recipientHandlesDidChange;
- (void)recipientsDidChange;
- (void)removeIMHandleGUIDFromDanglingHandles:(id)a0;
- (char)representsNewChat;
- (unsigned long long)validateIMHandle:(id)a0;

@end
