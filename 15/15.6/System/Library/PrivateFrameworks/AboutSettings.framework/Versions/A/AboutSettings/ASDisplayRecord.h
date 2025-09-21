@class NSString, NSImage, NSData, NSBundle;

@interface ASDisplayRecord : NSObject {
    NSBundle *_bundle;
    NSString *_displayName;
    unsigned int _panelWidth;
    unsigned int _panelHeight;
    unsigned int _horzDPI;
    unsigned int _vertDPI;
    unsigned int _presetCount;
    unsigned long long _sortHash;
}

@property (retain) NSImage *image;
@property (readonly) int displayID;
@property (readonly) NSData *edid;
@property (readonly) unsigned long long serialNumber;
@property (readonly) NSString *displayName;
@property (readonly) NSString *gfxDisplayName;
@property (readonly) NSString *resolutionString;
@property (readonly) NSString *modelNumber;
@property (readonly) char isMainScreen;
@property (readonly) char isBuiltIn;
@property (readonly) char isApple;
@property (readonly) char isHiDPI;
@property (readonly) char isRetina;
@property (readonly) char isTV;
@property (readonly) unsigned long long sortHash;

- (void).cxx_destruct;
- (id)bundle;
- (id)localizedString:(id)a0;
- (id)initWithCGSDisplayID:(int)a0;
- (void)prefetchDisplayImage;
- (void)refreshDisplayInfo;
- (id)resolutionStringForPanelDimensions:(struct PanelDimensions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0 isTV:(char)a1 isApple:(char)a2 language:(id)a3;

@end
