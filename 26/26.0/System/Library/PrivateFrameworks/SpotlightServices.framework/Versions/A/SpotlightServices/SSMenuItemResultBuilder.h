@class NSString, NSArray;

@interface SSMenuItemResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSArray *pathComponents;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildMenuBarAppIconImage;
- (id)buildMenuItemSymbolImage;
- (id)buildThumbnail;

@end
