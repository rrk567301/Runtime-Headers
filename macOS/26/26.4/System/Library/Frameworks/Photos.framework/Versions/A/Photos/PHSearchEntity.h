@class NSString, NSArray;

@interface PHSearchEntity : PHObject {
    NSString *_synonymsString;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *searchEntityIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSArray *synonyms;

+ (BOOL)managedObjectSupportsSharingComposition;
+ (id)managedEntityName;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)fetchSearchEntitiesWithOptions:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (double)confidenceForMoment:(id)a0;
- (id)dateIntervalForMoment:(id)a0;
- (id)initWithNodeContainer:(id)a0 photoLibrary:(id)a1;

@end
