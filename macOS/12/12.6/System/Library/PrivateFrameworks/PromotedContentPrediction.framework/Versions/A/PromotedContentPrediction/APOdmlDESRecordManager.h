@class NSMutableDictionary;

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
