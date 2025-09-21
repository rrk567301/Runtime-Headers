@class PHFace, PXPeopleSuggestionManager, NSString, PHAsset, PXPeopleNameSelection;
@protocol PXPeopleSuggestionManagerDataSource, PXPersonSuggestion, PXPerson;

@interface PXPeopleBootstrapContext : NSObject

@property (copy, nonatomic) id /* block */ delayedPersonBlock;
@property (retain, nonatomic) PHFace *face;
@property (retain) id<PXPerson> sourcePerson;
@property (retain) id<PXPerson> targetPerson;
@property unsigned long long bootstrapType;
@property (retain) PXPeopleNameSelection *nameSelection;
@property (retain) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic) char skipInitialAction;
@property (copy, nonatomic) id /* block */ onInitBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) char wantsNaming;
@property (nonatomic) char wantsMergeCandidateSuggestions;
@property (nonatomic) char wantsPostNaming;
@property (nonatomic) char wantsToBeAddedToPeopleAlbum;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> prefetchedDataSource;
@property (retain, nonatomic) NSString *callerInfo;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) id<PXPersonSuggestion> personSuggestion;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) char didCommitPreBootstrapAction;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) char wantsContactUnlinkage;

+ (id)contextWithFace:(id)a0 type:(unsigned long long)a1 delayedPersonBlock:(id /* block */)a2;
+ (id)contextWithPerson:(id)a0 type:(unsigned long long)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
