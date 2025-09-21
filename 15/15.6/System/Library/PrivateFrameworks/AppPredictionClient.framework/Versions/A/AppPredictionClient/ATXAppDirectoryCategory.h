@class NSArray, NSString;

@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long categoryID;
@property (readonly, nonatomic) NSArray *appBundleIDs;
@property (readonly, nonatomic) NSString *localizedName;

+ (char)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)a0;
+ (unsigned long long)_parentCategoryForiTunesGenreID:(unsigned long long)a0;
+ (unsigned long long)appDirectoryCategoryStringToAppDirectoryCategoryID:(id)a0;
+ (id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)a0;
+ (char)isCategory:(unsigned long long)a0 descendantOfCategory:(unsigned long long)a1;
+ (char)isCategoryScreenTime:(unsigned long long)a0;
+ (char)isCategorySpecial:(unsigned long long)a0;
+ (char)isCategoryiTunesGamesSubgenre:(unsigned long long)a0;
+ (char)isCategoryiTunesGenre:(unsigned long long)a0;
+ (id)localizedStringForCategoryID:(unsigned long long)a0;
+ (id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)a0;
+ (unsigned long long)parentCategoryForCategory:(unsigned long long)a0;
+ (unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)a0;
+ (char)shouldCategoryAlwaysMergeWithParent:(unsigned long long)a0;
+ (char)shouldCategoryNeverMergeWithParent:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1 localizedName:(id)a2;
- (id)localizedStringForCategoryID:(unsigned long long)a0;
- (void)updateAppBundleIDs:(id)a0;
- (void)updateCategoryLocalizedNameWithName:(id)a0;

@end
