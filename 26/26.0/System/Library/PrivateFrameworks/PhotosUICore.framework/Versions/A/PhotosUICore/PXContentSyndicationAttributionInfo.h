@class PXContentSyndicationPhotoKitSocialLayerHighlightProvider, NSString, NSImage, SLHighlight, CNContact, NSAttributedString, PHAsset;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;

@interface PXContentSyndicationAttributionInfo : NSObject

@property (copy, nonatomic) NSString *syndicationSenderDisplayName;
@property (copy, nonatomic) NSString *senderAppName;
@property (copy, nonatomic) NSAttributedString *syndicationSharedWithInMessagesAttributedTitle;
@property (copy, nonatomic) NSAttributedString *savedFromTitle;
@property (nonatomic) BOOL syndicationAttributionInfoIsLoading;
@property (nonatomic) BOOL hasSyndicationAttributionInfo;
@property (retain, nonatomic) NSImage *senderThumbnailImage;
@property (retain, nonatomic) NSString *syndicationAttributionIdentifier;
@property (copy, nonatomic) NSString *axDescriptionForSyndicationContactImage;
@property (copy, nonatomic) NSString *axDescriptionForSyndicationReplyButton;
@property (copy, nonatomic) NSString *axHintForSyndicationButton;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *receivingGroupDisplayName;
@property (retain, nonatomic) PXContentSyndicationPhotoKitSocialLayerHighlightProvider *highlightProvider;
@property (weak, nonatomic) id<PXContentSyndicationAttributionInfoChangeDelegate> changeDelegate;
@property (readonly, copy, nonatomic) NSString *axDescriptionForSyndicationLoadingIndicator;

+ (id)_primaryFont;
+ (id)_applyAttributesToTitle:(id)a0;
+ (id)_displayNameFont;
+ (id)_nameStringForContact:(id)a0;
+ (id)_sharedContactFetchSerialQueue;
+ (id)appIconFetchQueue;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)_contactChangeDidOccur:(id)a0;
- (void)_fetchContactWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_handleAttributionChanges;
- (void)_handleContactFetchCompletion:(id)a0 error:(id)a1 oldSyndicationSenderDisplayName:(id)a2 oldSyndicationSharedWithTitle:(id)a3 oldImageData:(id)a4;
- (void)_invalidateAttributedStrings;
- (id)_sfaAppNameAttributes;
- (id)_sfaAttributes;
- (void)_updateAppNameColorForAttributedString:(id)a0 defaultFontValue:(id)a1;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
