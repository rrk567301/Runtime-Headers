@class NSString, NSArray, NSSet, DEDBugSession, FBKAttachmentManager, FBKGroupedDevice;

@interface FBKAttachmentCollection : NSObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) DEDBugSession *bugSession;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) char isRequired;
@property (nonatomic, readonly) NSSet *additionalMatchers;
@property (retain, nonatomic) FBKAttachmentManager *attachmentManager;
@property (retain, nonatomic) FBKGroupedDevice *device;

- (void).cxx_destruct;
- (char)hasAnyAttachmentCollectedOrCollecting;
- (id)initWithAttachmentManager:(id)a0 device:(id)a1;
- (char)isAlreadyCollectingThisMatcher:(id)a0 ignoreAdditional:(char)a1;
- (void)replaceEmptyAttachmentsWithAdditionalMatchersWithAdditional:(id)a0;
- (char)replacePreviousAdditionalMatchersWithRequiredMatchersIfNeededWithRequired:(id)a0;
- (id)updateMatcherPredicatesWithUpdatedMatchers:(id)a0 allRequiredMatchers:(id)a1 formPlatform:(id)a2;

@end
