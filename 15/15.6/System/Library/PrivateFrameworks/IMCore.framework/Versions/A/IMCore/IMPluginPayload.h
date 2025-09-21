@class NSURL, TUConversationActivity, NSDate, DDScannerResult, NSDictionary, IMBalloonPluginDataSource, NSString, NSAttributedString, NSArray, NSData, _SWCollaborationMetadata, CKShare, CKContainerSetupInfo;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (retain, nonatomic) NSString *pluginSessionGUID;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachments;
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) char isFromMe;
@property (nonatomic) char isPlayed;
@property (readonly, nonatomic) char shouldHideAttachments;
@property (readonly, nonatomic) char supportsCollaboration;
@property (retain, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (retain, nonatomic) NSString *collaborationOptionsSummary;
@property (retain, nonatomic) NSURL *sendAsCopyURL;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (copy, nonatomic) NSString *sender;
@property (retain, nonatomic) CKShare *cloudKitShare;
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *generativePlaygroundRecipeData;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *breadcrumbText;
@property (retain, nonatomic) NSString *statusText;
@property (nonatomic, getter=isUpdate) char update;
@property (nonatomic, getter=isSticker) char sticker;
@property (nonatomic) char shouldExpire;
@property (readonly, nonatomic) char supportsSendLater;
@property (nonatomic) long long payloadCollaborationType;
@property (nonatomic) char sendAsCopy;
@property (nonatomic) char skipConfigurePlugin;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TUConversationActivity *groupActivity;
@property (readonly, nonatomic) NSString *threadIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (id)initWithMessageItem:(id)a0;
- (id)payloadDictionary;
- (void)acceptPurgedTransfers;
- (void)addAttachmentsFromFilePaths:(id)a0;
- (void)addAttachmentsFromFileTransferGUIDs:(id)a0;
- (id)initWithCoder:(id)a0 additionalAllowedClasses:(id)a1;
- (id)initWithMessageItem:(id)a0 chatContext:(id)a1;
- (char)isEqualAttachmentFileURLsToPluginPayload:(id)a0;
- (char)isEqualToPluginPayload:(id)a0;

@end
