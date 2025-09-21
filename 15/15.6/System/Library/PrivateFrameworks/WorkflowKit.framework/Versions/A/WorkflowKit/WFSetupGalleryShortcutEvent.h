@class NSString;

@interface WFSetupGalleryShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *galleryCategoryIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (nonatomic) char completed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
