@class NSData, MADManagedPhotosAsset;

@interface MADManagedPhotosResult : NSManagedObject

@property (retain, nonatomic) NSData *results;
@property (nonatomic) long long resultsType;
@property (retain, nonatomic) MADManagedPhotosAsset *asset;

+ (id)fetchRequest;
+ (id)assetColumnName;
+ (id)resultsArrayFromData:(id)a0;
+ (id)resultsColumnName;
+ (id)resultsDataFromArray:(id)a0;
+ (id)resultsTypeColumnName;

- (id)description;

@end
