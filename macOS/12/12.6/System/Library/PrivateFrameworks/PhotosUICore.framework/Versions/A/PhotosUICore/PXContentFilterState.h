@class NSArray, NSString;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (nonatomic) long long libraryType;
@property (readonly, nonatomic) BOOL hasRules;
@property (readonly, nonatomic) long long ruleCount;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (nonatomic) long long assetSource;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSString *localizedDescriptionForFilters;
@property (readonly, nonatomic) NSString *localizedFooterDescriptionForFilters;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibraryType:(long long)a0;
- (id)predicateForUseCase:(unsigned long long)a0;
- (BOOL)isContentFilterActive:(long long)a0;

@end
