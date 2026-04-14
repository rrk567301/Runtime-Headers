@class MPModelLibrarySearchScope;

@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject {
    MPModelLibrarySearchScope *_underlyingSearchScope;
}

@property (readonly, nonatomic) long long modelObjectType;

+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)a0;
+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)a0;

- (void).cxx_destruct;
- (id)_initWithUnderlyingSearchScope:(id)a0 modelObjectType:(long long)a1;
- (id)initWithModelObjectType:(long long)a0;
- (id)_underlyingSearchScope;
- (long long)_modelObjectType;

@end
