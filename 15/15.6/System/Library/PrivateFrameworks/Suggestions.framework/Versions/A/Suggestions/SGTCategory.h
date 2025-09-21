@class NSString, NSArray, SGTCategoryReserved;

@interface SGTCategory : NSObject {
    SGTCategoryReserved *_reserved;
}

@property (readonly) NSString *displayName;
@property (readonly) unsigned long long position;
@property char uniquifiersDrawBelow;
@property char showsImagesInMenu;
@property char proposesCompletion;
@property (readonly) NSArray *attributeNamesForRawSuggestion;

+ (id)topHitCategory;
+ (id)recentsCategory;
+ (id)folderCategory;
+ (id)othersCategory;
+ (id)suggestionsCategory;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)displayNameForRawSuggestionInMenu:(id)a0;
- (id)initWithDisplayName:(id)a0 position:(unsigned long long)a1;
- (char)rawSuggestionShouldCreateToken;

@end
