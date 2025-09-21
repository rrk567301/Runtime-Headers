@class NSURL, TUConversationActivity, NSDate, DDScannerResult, NSDictionary, IMBalloonPluginDataSource, NSString, NSAttributedString, NSArray, NSData, _SWCollaborationMetadata, CKShare, CKContainerSetupInfo;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (retain, nonatomic) NSString *pluginSessionGUID;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachments;
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL shouldHideAttachments;
@property (readonly, nonatomic) BOOL supportsCollaboration;
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
@property (nonatomic, getter=isUpdate) BOOL update;
@property (nonatomic, getter=isSticker) BOOL sticker;
@property (nonatomic, getter=isCustomAcknowledgement) BOOL customAcknowledgement;
@property (nonatomic) BOOL shouldExpire;
@property (readonly, nonatomic) BOOL supportsSendLater;
@property (nonatomic) long long payloadCollaborationType;
@property (nonatomic) BOOL sendAsCopy;
@property (nonatomic) BOOL skipConfigurePlugin;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TUConversationActivity *groupActivity;
@property (nonatomic) BOOL liveEditableInEntryView;
@property (readonly, nonatomic) NSString *threadIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageItem:(id)a0;
- (id)payloadDictionary;
- (id)_transformPluginBundleIDIfNeeded:(id)a0;
- (void)acceptPurgedTransfers;
- (void)addAttachmentsFromFilePaths:(id)a0;
- (void)addAttachmentsFromFileTransferGUIDs:(id)a0;
- (id)initWithCoder:(id)a0 additionalAllowedClasses:(id)a1;
- (id)initWithMessageItem:(id)a0 chatContext:(id)a1;
- (BOOL)isEqualAttachmentFileURLsToPluginPayload:(id)a0;
- (BOOL)isEqualToPluginPayload:(id)a0;

@end
