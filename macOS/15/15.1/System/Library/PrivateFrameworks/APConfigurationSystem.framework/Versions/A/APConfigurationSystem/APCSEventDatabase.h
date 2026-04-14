@class NSNumber;

@interface APCSEventDatabase : APConfiguration

@property (retain, nonatomic) NSNumber *expirationOfData;
@property (retain, nonatomic) NSNumber *isEventDatabaseStorageEnabled;

+ (id)path;

@end
