@class NSString, NSSet, NSDate;

@interface MADManagedPhotosAsset : NSManagedObject

@property (nonatomic) long long analysisTypes;
@property (copy, nonatomic) NSDate *dateAnalyzed;
@property (copy, nonatomic) NSDate *dateModified;
@property (nonatomic) long long flags;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) float quality;
@property (nonatomic) long long statsFlags;
@property (nonatomic) int version;
@property (retain, nonatomic) NSSet *results;

+ (id)fetchRequest;
+ (id)flagsColumnName;
+ (id)analysisTypesColumnName;
+ (id)dateAnalyzedColumnName;
+ (id)dateModifiedColumnName;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)localIdentifierColumnName;
+ (id)qualityColumnName;
+ (id)resultsColumnName;
+ (id)statsFlagsColumnName;
+ (id)versionColumnName;

- (id)description;
- (void)addResult:(id)a0;
- (void)removeResult:(id)a0;

@end
