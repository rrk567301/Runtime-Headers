@class NSArray, NSMutableDictionary, EXSAccount;

@interface EXSEWSGetAttachmentOperation : EXSEWSOperation {
    NSMutableDictionary *_serverIdsToAttachmentUUIDs;
    EXSAccount *_account;
}

@property (nonatomic) unsigned long long dataLength;
@property (retain, nonatomic) NSArray *attachmentRequestKeys;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)initWithProtocol:(id)a0 account:(id)a1;
- (void)_saveAttachmentWithServerId:(id)a0 tempFile:(id)a1;

@end
