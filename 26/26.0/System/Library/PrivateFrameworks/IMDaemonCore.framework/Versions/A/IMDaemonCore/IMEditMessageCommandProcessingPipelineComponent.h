@class IMDiMessagePipelineResources;

@interface IMEditMessageCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_messageStore;
- (void).cxx_destruct;
- (id)_account;
- (long long)_messageEditHistoryLimit;
- (double)_messageRetractionReceivedTimeoutEnforcingExactTimeoutInterval:(BOOL)a0;
- (id)_adaptiveImageGlyphFileTransferGUIDsInMessageItem:(id)a0;
- (id)_applyEditsToMessage:(id)a0 preEditFullMessageText:(id)a1 editType:(unsigned long long)a2 editedPartIndex:(long long)a3 editedMessagePartText:(id)a4 editedMessagePartTranslation:(id)a5 shouldRetractSubject:(BOOL)a6 editTimestamp:(id)a7;
- (id)_idsAccount;
- (double)_messageEditReceivedTimeout;
- (id)_storeEditedMessage:(id)a0 editedPartIndex:(long long)a1 editType:(unsigned long long)a2 previousMessage:(id)a3 updateChats:(id)a4;
- (double)_timeoutIntervalForEditType:(unsigned long long)a0 enforceExactRetractionTimeoutInterval:(BOOL)a1;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
