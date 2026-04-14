@class NSString, NSArray, NSURL, SFRichText;

@interface SSApplicationResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSURL *appURL;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *matchedAlternateName;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) SFRichText *highlightedAlternateName;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)formattedAlternateNamesForBundleId:(id)a0 withAlternateNames:(id)a1;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (BOOL)isFromOneness;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildApplicationURL;
- (id)buildDescriptions;
- (id)buildFillToolParameterCommand;
- (id)buildFootnote;
- (id)buildSecondaryCommand;
- (id)buildThumbnail;
- (id)buildTitle;

@end
