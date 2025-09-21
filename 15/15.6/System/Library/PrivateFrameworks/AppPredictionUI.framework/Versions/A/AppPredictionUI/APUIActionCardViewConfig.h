@class NSString;

@interface APUIActionCardViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char showThumbnailImage;
@property (nonatomic) char useAppIconAsThumbnail;
@property (nonatomic) char showActionButton;
@property (nonatomic) char showAppFootnote;
@property (nonatomic) char showAppFootnoteIcon;
@property (nonatomic) char useTinyIconVariant;
@property (nonatomic) long long maxLinesForTitle;
@property (nonatomic) long long maxLinesForSubtitle;
@property (nonatomic) long long maxLinesForFootnote;
@property (nonatomic) char fallbackToCustomResponseString;

- (id)init;
- (void).cxx_destruct;

@end
