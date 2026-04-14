@class NSString, NSArray;

@interface SPUISMenuItemResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSArray *pathComponents;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildMenuBarAppIconImage;
- (id)buildMenuItemSymbolImage;
- (id)buildThumbnail;

@end
