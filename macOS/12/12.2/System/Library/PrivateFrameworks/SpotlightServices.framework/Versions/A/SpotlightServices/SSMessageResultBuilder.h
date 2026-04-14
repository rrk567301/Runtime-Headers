@class NSString, NSArray, NSDate;

@interface SSMessageResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *groupDisplayName;
@property (retain, nonatomic) NSString *groupPhotoPath;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSArray *attachmentNames;
@property (retain, nonatomic) NSArray *attachmentPaths;
@property (retain, nonatomic) NSArray *attachmentTypes;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientContactIds;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSArray *senders;
@property (retain, nonatomic) NSArray *senderContactIds;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildThumbnail;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildTitle;
- (id)buildDescriptions;
- (id)buildAttachmentThumbnail;
- (id)buildAttachmentSummary;

@end
