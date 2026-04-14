@class NSAttributedString, NSString, NSArray, IMDChat, IMDiMessageIDSTrustedData, NSNumber;

@interface IMEditMessageCommandPipelineParameter : NSObject <IMEditMessageCommandProcessingParameter, IMMessageFromStorageParameter>

@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;
@property (readonly, nonatomic) NSString *editCommandGUID;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (readonly, nonatomic) NSString *editedMessageGUID;
@property (readonly, nonatomic) long long editedMessagePartIndex;
@property (readonly, nonatomic) unsigned long long editType;
@property (readonly, nonatomic) NSAttributedString *editedMessagePartBody;
@property (readonly, nonatomic) NSArray *editedMessagePartFileTransferGUIDs;
@property (readonly, nonatomic) BOOL shouldRetractMessageSubject;
@property (readonly, nonatomic) BOOL hasEditTypeAndPartIndex;
@property (readonly, nonatomic) NSAttributedString *fullMessageBody;
@property (readonly, nonatomic) NSString *fullMessagePlainTextBody;
@property (readonly, nonatomic) NSString *fullMessagePlainTextSubject;
@property (readonly, nonatomic) NSArray *fullMessageFileTransferGUIDs;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (id)GUID;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;
- (id)_createSuperFormattedStringWithAttributedString:(id)a0;
- (id)initWithIdsTrustedData:(id)a0 editCommandGUID:(id)a1 timestamp:(id)a2 isFromStorage:(BOOL)a3 isLastFromStorage:(BOOL)a4 fullMessageBody:(id)a5 fullMessagePlainTextBody:(id)a6 fullMessagePlainTextSubject:(id)a7 fullMessageFileTransferGUIDs:(id)a8 editedMessageGUID:(id)a9 editedMessagePartIndex:(long long)a10 editType:(unsigned long long)a11 editedMessagePartBody:(id)a12 editedMessagePartFileTransferGUIDs:(id)a13 shouldRetractMessageSubject:(BOOL)a14 hasEditTypeAndPartIndex:(BOOL)a15;
- (id)_existingFileTransfersForMessageGuid:(id)a0;
- (unsigned long long)_messageItemEditTypeForBlastdoorEditType:(long long)a0;

@end
