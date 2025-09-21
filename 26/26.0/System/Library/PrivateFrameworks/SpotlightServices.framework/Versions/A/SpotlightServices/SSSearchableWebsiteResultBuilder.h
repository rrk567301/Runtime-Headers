@class NSURL, NSString, SFImage;

@interface SSSearchableWebsiteResultBuilder : SSResultBuilder

@property (retain) NSURL *url;
@property (retain) NSString *entityIdentifier;
@property (retain) NSString *websiteName;
@property BOOL primaryCommandExecutesSearch;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *searchString;
@property (retain) SFImage *thumbnail;

+ (BOOL)supportsResult:(id)a0;
+ (id)cardSectionForSearchWebsiteCommand:(id)a0 searchString:(id)a1;
+ (id)websiteNameForURL:(id)a0;

- (id)initWithResult:(id)a0;
- (void)setQueryContext:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildSecondaryCommand;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)bundleIdentifierForAppIconBadgeImage;

@end
