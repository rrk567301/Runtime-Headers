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
+ (id)suggestionsCategory;
+ (id)folderCategory;
+ (id)recentsCategory;
+ (id)othersCategory;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 position:(unsigned long long)a1;
- (BOOL)rawSuggestionShouldCreateToken;
- (id)displayNameForRawSuggestionInMenu:(id)a0;

@end
