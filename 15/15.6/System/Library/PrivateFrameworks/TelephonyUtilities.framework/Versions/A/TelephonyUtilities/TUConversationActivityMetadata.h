@class NSString, TUConversationActivitySceneAssociationBehavior, NSData, TUSandboxExtendedURL, TUConversationActivityContext, NSURL;

@interface TUConversationActivityMetadata : NSObject <TUSanitizedCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) TUSandboxExtendedURL *imageFileURL;
@property (readonly, copy, nonatomic) TUConversationActivityContext *context;
@property (copy, nonatomic) NSData *linkMetadatablob;
@property (readonly, copy, nonatomic) NSURL *fallbackURL;
@property (readonly, copy, nonatomic) NSURL *invitationURL;
@property (nonatomic) char supportsContinuationOnTV;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long preferredBroadcastingAttributes;
@property (readonly, copy, nonatomic) TUConversationActivitySceneAssociationBehavior *sceneAssociationBehavior;
@property (readonly, nonatomic) char supportsActivityPreviews;
@property (readonly, nonatomic) long long contentAssociation;
@property (readonly, nonatomic) long long lifetimePolicy;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityMetadataWithDataBlob:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedData;
- (void)saveImageToDisk;
- (char)isEquivalentToActivityMetadata:(id)a0;
- (char)_createImageFolderIfNeeded;
- (id)_filePathForImage;
- (id)_imagePreviewDirectoryPath;
- (char)_isEqualToActivityMetadata:(id)a0;
- (id)initWithContext:(id)a0 linkMetadata:(id)a1 fallbackURL:(id)a2 invitationURL:(id)a3 supportsContinuationOnTV:(char)a4 title:(id)a5 subTitle:(id)a6 imageData:(id)a7;
- (id)initWithContext:(id)a0 linkMetadata:(id)a1 fallbackURL:(id)a2 invitationURL:(id)a3 supportsContinuationOnTV:(char)a4 title:(id)a5 subTitle:(id)a6 imageData:(id)a7 preferredBroadcastingAttributes:(long long)a8 sceneAssociationBehavior:(id)a9 supportsActivityPreviews:(char)a10;
- (id)initWithContext:(id)a0 linkMetadata:(id)a1 fallbackURL:(id)a2 invitationURL:(id)a3 supportsContinuationOnTV:(char)a4 title:(id)a5 subTitle:(id)a6 imageData:(id)a7 preferredBroadcastingAttributes:(long long)a8 sceneAssociationBehavior:(id)a9 supportsActivityPreviews:(char)a10 lifetimePolicy:(long long)a11;
- (void)removeImageDiskFile;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end
