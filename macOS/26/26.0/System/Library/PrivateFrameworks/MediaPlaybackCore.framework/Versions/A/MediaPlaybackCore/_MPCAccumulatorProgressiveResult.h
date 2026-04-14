@class MPIdentifierSet, MPModelGenericObject, NSMutableArray;
@protocol MPObjectDatabaseProgressiveResult;

@interface _MPCAccumulatorProgressiveResult : NSObject <NSCopying, MPObjectDatabaseProgressiveResult> {
    unsigned int _piaTag;
    struct { long long tokenID; int tokenRevision; unsigned int databaseStorage; } _sodToken;
    struct { long long tokenID; int tokenRevision; unsigned int databaseStorage; } _lodToken;
    MPIdentifierSet *_requestedIdentifiers;
    _MPCAccumulatorProgressiveResult *_parentResult;
    NSMutableArray *_prioritizedStoreIDs;
    NSMutableArray *_loadingStoreIDs;
    NSMutableArray *_loadedStoreIDs;
    NSMutableArray *_failedStoreIDs;
    MPIdentifierSet *_sodIdentifiers;
    MPIdentifierSet *_lodIdentifiers;
    BOOL _hasSodToken;
    BOOL _hasLodToken;
    MPModelGenericObject *_requestedModelObject;
}

@property (readonly, copy, nonatomic) MPIdentifierSet *inputIdentifiers;
@property (readonly, nonatomic) id<MPObjectDatabaseProgressiveResult> parentResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setIdentifiers:(id)a0 forDatabase:(id)a1;
- (void)setToken:(struct { long long x0; int x1; unsigned int x2; })a0 forDatabase:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; })tokenForDatabase:(id)a0;

@end
