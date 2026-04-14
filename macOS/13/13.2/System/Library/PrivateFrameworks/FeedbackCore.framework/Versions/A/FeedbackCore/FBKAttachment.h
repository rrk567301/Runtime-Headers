@class FBKURLExtension, DEDAttachmentGroup, DEDAttachmentItem, NSString, NSURL, DEDExtension, FBKMatcherPredicate;

@interface FBKAttachment : NSObject <FBKDiffableObject>

@property (retain, nonatomic) DEDAttachmentGroup *attachedGroup;
@property (retain, nonatomic) DEDAttachmentItem *attachedItem;
@property (nonatomic) long long attachmentType;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSURL *originalLocalFileURL;
@property (readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) FBKMatcherPredicate *requirement;
@property (retain, nonatomic) DEDExtension *extension;
@property (retain, nonatomic) FBKURLExtension *urlExtension;
@property (nonatomic) BOOL fileComesFromFBK;
@property (readonly, nonatomic) BOOL wasAttachedByApplication;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSString *proposedFileNameForLocalFiles;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *collectorIdentifier;
@property (readonly, nonatomic) NSString *instructionsAsHTML;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (id)displayName;
- (void)remove;
- (BOOL)isCollecting;
- (id)item;
- (id)group;
- (id)shortDescription;
- (BOOL)isLocal;
- (BOOL)hasGroup;
- (BOOL)isRequired;
- (BOOL)canBeDeleted;
- (id)diffableHashWithContext:(id)a0;
- (BOOL)isAdditional;
- (id)initWithCollectorIdentifier:(id)a0 deviceUUID:(id)a1;
- (id)initWithRequirement:(id)a0 urlExtension:(id)a1 collectorIdentifier:(id)a2 deviceUUID:(id)a3;
- (void)setItem:(id)a0 originalURL:(id)a1;
- (id)promisedFileName;
- (BOOL)hasFBKFileReadyForSubmission;
- (BOOL)hasFiles;
- (BOOL)shouldAutoGather;
- (BOOL)isReadyToDisplayContents;
- (BOOL)canStartGathering;

@end
