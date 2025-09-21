@class NSBundle, NSImage, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CPKEmojiIMSharedResources : NSObject

@property (retain) NSBundle *frameworkBundle;
@property NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSMutableArray *suggested;
@property (retain) NSMutableArray *displayingRecents;
@property (retain) NSMutableArray *localRecents;
@property (retain) NSMutableArray *categoryDataArray;
@property (retain) NSImage *recentsImage;
@property (retain) NSMutableArray *categoryImages;
@property (readonly) char hasSuggestedEmojis;
@property char isDataReady;
@property char isRTLDirection;
@property char emojiViewOncePrepared;

+ (id)sharedInstance;
+ (Class)CPDataClass;
+ (id)createCloseButtonWithWidth:(double)a0;
+ (char)isUIDirectionRTL;
+ (id)searchButtonImage;

- (void)dealloc;
- (id)init;
- (id)imageNamed:(id)a0;
- (id)localizedString:(id)a0;
- (long long)categoryCount;
- (char)_isEmojiString:(id)a0;
- (id)skinTonedCharacterForCharacter:(id)a0;
- (void)_didChangedRecentsInCharacterPicker:(id)a0;
- (id)_emojiPreference;
- (void)_loadSystemRecentsWithFilling:(char)a0 usingBlock:(id /* block */)a1;
- (void)_saveRecentsWithNewCharacter:(id)a0;
- (void)_waitForinitialization;
- (id)categoryImageForCategoryIndex:(long long)a0;
- (id)categoryNameForCategoryIndex:(long long)a0;
- (id)charactersForCategoryIndex:(long long)a0;
- (void)didSelectedCharacter:(id)a0;
- (char)hasSelectedSkinToneForCharacter:(id)a0;
- (unsigned long long)numberOfIndicesBeforeEmojiCategories;
- (unsigned long long)recentIndex;
- (unsigned long long)suggestedIndex;

@end
