@class NSArray, NSString, _AMiDVDMenu;

@interface _AMiDVDApplication : SBApplication

@property (readonly, copy) NSArray *applicationDefinedButtonShapes;
@property int aspectRatio;
@property (copy) NSString *autoplayMovie;
@property (copy) NSArray *autoplaySlideshow;
@property int autoplaySlideshowTransitionDirection;
@property int autoplaySlideshowTransitionType;
@property (readonly, copy) NSArray *availableDVDBurners;
@property (readonly, copy) NSArray *availableTransitions;
@property char backgroundEncoding;
@property char bestQualityEncoding;
@property (readonly, copy) _AMiDVDMenu *currentMenu;
@property (readonly) char discReady;
@property (readonly) char isBurning;
@property char loopAutoplay;
@property char motionMode;
@property char previewMode;
@property char proQualityEncoding;
@property (readonly) char projectDirty;
@property (copy) NSString *projectName;
@property (readonly) long long projectSize;
@property (copy) NSArray *properties;
@property char quietMode;
@property (readonly) char ready;
@property char renderMode;
@property char supportChapterMarkers;
@property int tvStandard;
@property (readonly) char frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

+ (id)application;

- (id)windows;
- (id)documents;
- (id)menus;
- (id)open:(id)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)applicationThemes;
- (void)print:(id)a0 printDialog:(char)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;
- (id)slideshows;

@end
