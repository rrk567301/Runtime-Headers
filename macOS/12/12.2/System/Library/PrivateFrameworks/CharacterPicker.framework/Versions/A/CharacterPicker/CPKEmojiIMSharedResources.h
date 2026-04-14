@class NSBundle, NSImage, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CPKEmojiIMSharedResources : NSObject

@property (retain) NSBundle *frameworkBundle;
@property NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSMutableArray *displayingRecents;
@property (retain) NSMutableArray *localRecents;
@property (retain) NSMutableArray *categoryDataArray;
@property (retain) NSImage *recentsImage;
@property (retain) NSMutableArray *categoryImages;
@property BOOL isDataReady;
@property BOOL isRTLDirection;
@property BOOL emojiViewOncePrepared;

+ (id)sharedInstance;
+ (id)createCloseButtonWithWidth:(double)a0;
+ (BOOL)isUIDirectionRTL;
+ (id)searchButtonImage;
+ (Class)CPDataClass;

- (void)dealloc;
- (id)init;
- (id)imageNamed:(id)a0;
- (id)localizedString:(id)a0;
- (long long)categoryCount;
- (id)categoryImageForCategoryIndex:(long long)a0;
- (id)categoryNameForCategoryIndex:(long long)a0;
- (id)_emojiPreference;
- (void)_didChangedRecentsInCharacterPicker:(id)a0;
- (void)_loadSystemRecentsWithFilling:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)_waitForinitialization;
- (void)_saveRecentsWithNewCharacter:(id)a0;
- (BOOL)_isEmojiString:(id)a0;
- (id)charactersForCategoryIndex:(long long)a0;
- (id)skinTonedCharacterForCharacter:(id)a0;
- (BOOL)hasSelectedSkinToneForCharacter:(id)a0;
- (void)didSelectedCharacter:(id)a0;

@end
