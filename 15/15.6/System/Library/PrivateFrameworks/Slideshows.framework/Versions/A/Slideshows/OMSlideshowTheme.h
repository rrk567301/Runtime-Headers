@class NSString, NSArray;

@interface OMSlideshowTheme : NSObject

@property (readonly) NSString *pluginIdentifier;
@property (readonly) NSArray *specificGuidelines;
@property (readonly) unsigned long long type;
@property (readonly) NSString *themeID;
@property (readonly) NSString *localizedName;
@property (readonly) NSArray *audioFilePaths;
@property (readonly) char supportsFitsToMusic;
@property (readonly) char supportsSetDuration;
@property (readonly) char supportsSetPerPageDuration;
@property (readonly) char supportsCustomTransitions;
@property (readonly) char supportsScaleToFitOrFill;
@property (readonly) char supportsCustomKenBurns;
@property (readonly) char supportsCaptions;
@property (readonly) NSArray *supportedCustomTransitions;

- (void)dealloc;
- (id)description;
- (struct CGImage { } *)thumbnailWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMarimbaStyleID:(id)a0;
- (id)initWithOpusPluginIdentifier:(id)a0;
- (id)initWithThemeID:(id)a0 localizedName:(id)a1 specificGuidelines:(id)a2 andOpusPluginIdentifier:(id)a3;
- (char)supportsCustomTransitionID:(id)a0;

@end
