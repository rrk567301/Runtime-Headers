@class NSString, NSArray, SGTCategoryReserved;

@interface SGTCategory : NSObject {
    SGTCategoryReserved *_reserved;
}

@property (readonly) NSString *displayName;
@property (readonly) unsigned long long position;
@property BOOL uniquifiersDrawBelow;
@property BOOL showsImagesInMenu;
@property BOOL proposesCompletion;
@property (readonly) NSArray *attributeNamesForRawSuggestion;

+ (id)topHitCategory;
+ (id)recentsCategory;
+ (id)suggestionsCategory;
+ (id)folderCategory;
+ (id)othersCategory;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)rawSuggestionShouldCreateToken;
- (id)initWithDisplayName:(id)a0 position:(unsigned long long)a1;
- (id)displayNameForRawSuggestionInMenu:(id)a0;

@end
