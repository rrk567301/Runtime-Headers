@class NSString, NSArray, MAAssetQuery, NSPredicate;

@interface ASAssetQuery : NSObject

@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) MAAssetQuery *maQuery;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) char queriesLocalAssetInformationOnly;
@property (nonatomic) double networkTimeout;

+ (id)queryPredicateForProperties:(id)a0;

- (void).cxx_destruct;
- (void)stopQuery;
- (id)initWithAssetType:(id)a0;
- (id)initWithAssetType:(id)a0 sessionIdentifier:(id)a1;
- (id)runQueryAndReturnError:(id *)a0;
- (id)runQueryForInfoReturnError:(id *)a0;
- (void)startQuery:(id /* block */)a0;

@end
