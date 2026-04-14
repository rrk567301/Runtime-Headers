@class NSNumber, NSArray;

@interface APCSEventDatabase : APConfiguration

@property (retain, nonatomic) NSNumber *expirationOfData;
@property (retain, nonatomic) NSNumber *isEventDatabaseStorageEnabled;
@property (retain, nonatomic) NSArray *supportedBundleIds;
@property (retain, nonatomic) NSArray *supportedPurposes;
@property (retain, nonatomic) NSNumber *expirationOfData2024E;
@property (retain, nonatomic) NSNumber *internalConversionTTL;

+ (id)path;

@end
