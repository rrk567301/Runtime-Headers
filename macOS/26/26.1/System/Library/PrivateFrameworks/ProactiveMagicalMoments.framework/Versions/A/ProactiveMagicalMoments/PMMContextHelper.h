@protocol _CDLocalContext;

@interface PMMContextHelper : NSObject

@property (readonly, nonatomic) id<_CDLocalContext> context;

+ (id)sharedInstance;

- (void)registerForNotifications:(id)a0;
- (void).cxx_destruct;
- (id)fetchContextValueForKeyPath:(id)a0;
- (id)fetchDataDictionaryForKeyPath:(id)a0;
- (id)init;

@end
