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
- (void)chatWillChange:(id)a0;
- (id)chatTranscriptItemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfChatTranscriptItems;
- (id)chatTranscriptItems;
- (BOOL)representsNewChat;
- (BOOL)canInsertAttachmentsIntoInputLineContents;
- (BOOL)canAddRecipientHandles;
- (BOOL)canRemoveRecipientHandles;
- (BOOL)filterEmptyChatOut;
- (void)recipientsDidChange;
- (void)recipientHandlesDidChange;
- (unsigned long long)validateIMHandle:(id)a0;
- (BOOL)canInsertFilesAtURLs:(id)a0 intoInputLineContentsReturningError:(id *)a1;
- (void)chatDidChange;
- (void)chatDisplayNameDidChange;
- (long long)compareForConversationListSorting:(id)a0;
- (void)_chatRegistryWillUnregisterChat:(id)a0;
- (void)removeIMHandleGUIDFromDanglingHandles:(id)a0;
- (long long)knownIDSIDStatusForIMHandle:(id)a0;
- (BOOL)_containsLegacyServiceHandles;
- (id)_currentIDSIDs;
- (void)_recalculateRecipientsFromIDSResults:(id)a0 allAddressesIMessageCapable:(BOOL)a1 checkedServer:(BOOL)a2 errorCode:(char)a3;
- (void)_replaceIDSRecipientsWithService:(id)a0;

@end
