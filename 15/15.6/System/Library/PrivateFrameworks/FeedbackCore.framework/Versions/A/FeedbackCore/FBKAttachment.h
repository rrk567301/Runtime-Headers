@class _TtC12FeedbackCore23FBKAttachmentAnnotation, DEDAttachmentItem, NSString, NSURL, DEDExtension, FBKMatcherPredicate, DEDAttachmentGroup, FBKURLExtension;

@interface FBKAttachment : NSObject <FBKDiffableObject>

@property (nonatomic, readonly) _TtC12FeedbackCore23FBKAttachmentAnnotation *annotation;
@property (retain, nonatomic) DEDAttachmentGroup *attachedGroup;
@property (retain, nonatomic) DEDAttachmentItem *attachedItem;
@property (nonatomic) long long attachmentType;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSURL *originalLocalFileURL;
@property (readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) FBKMatcherPredicate *requirement;
@property (retain, nonatomic) DEDExtension *extension;
@property (retain, nonatomic) FBKURLExtension *urlExtension;
@property (nonatomic) char fileComesFromFBK;
@property (readonly, nonatomic) char wasAttachedByApplication;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSString *proposedFileNameForLocalFiles;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *collectorIdentifier;
@property (readonly, nonatomic) NSString *instructionsAsHTML;
@property (retain, nonatomic) NSString *localizedAttachmentInfo;
@property (retain) id _annotationUntypedButAccessibleInSwift;

+ (id)descriptorForAttachment:(id)a0 given:(id)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (id)displayName;
- (char)isCollecting;
- (id)item;
- (void)remove;
- (id)shortDescription;
- (id)group;
- (char)isRequired;
- (char)isLocal;
- (char)hasGroup;
- (char)canBeDeleted;
- (char)canStartGathering;
- (id)diffableHashWithContext:(id)a0;
- (char)hasFBKFileReadyForSubmission;
- (char)hasFiles;
- (id)initWithCollectorIdentifier:(id)a0 deviceUUID:(id)a1;
- (id)initWithRequirement:(id)a0 urlExtension:(id)a1 collectorIdentifier:(id)a2 deviceUUID:(id)a3;
- (char)isAdditional;
- (char)isReadyToDisplayContents;
- (void)loadAnnotationFromURL:(id)a0;
- (char)matchesAttachmentDescriptor:(id)a0;
- (id)promisedFileName;
- (void)setItem:(id)a0 originalURL:(id)a1;
- (char)shouldAutoGather;

@end
