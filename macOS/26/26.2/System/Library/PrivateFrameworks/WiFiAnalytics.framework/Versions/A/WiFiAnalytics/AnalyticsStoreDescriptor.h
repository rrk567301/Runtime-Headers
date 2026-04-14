@class NSString, NSDictionary, NSURL, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (nonatomic) unsigned long long analyticsStoreOptions;
@property (retain, nonatomic) NSString *analyticsStoreOptionsDescription;
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions;

+ (id)defaultPersistentStoreURL;
+ (id)defaultModelURL;
+ (id)defaultModel;
+ (id)storeDescriptor;
+ (id)optionDescription:(unsigned long long)a0;
+ (id)applicationSupportDirectoryPath;
+ (id)defaultModelName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStoreURL:(id)a0 modelURL:(id)a1;

@end
