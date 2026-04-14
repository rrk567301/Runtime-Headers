@class NSString, NSDictionary, NSURL, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (nonatomic) unsigned long long analyticsStoreOptions;
@property (retain, nonatomic) NSString *analyticsStoreOptionsDescription;
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions;

+ (id)defaultModelName;
+ (id)optionDescription:(unsigned long long)a0;
+ (id)defaultPersistentStoreURL;
+ (id)storeDescriptor;
+ (id)defaultModelURL;
+ (id)applicationSupportDirectoryPath;
+ (id)defaultModel;

- (id)initWithStoreURL:(id)a0 modelURL:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
