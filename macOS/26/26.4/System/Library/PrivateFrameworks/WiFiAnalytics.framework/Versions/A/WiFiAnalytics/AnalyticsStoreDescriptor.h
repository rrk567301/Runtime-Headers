@class NSString, NSDictionary, NSURL, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (nonatomic) unsigned long long analyticsStoreOptions;
@property (retain, nonatomic) NSString *analyticsStoreOptionsDescription;
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions;

+ (id)defaultModel;
+ (id)optionDescription:(unsigned long long)a0;
+ (id)defaultModelURL;
+ (id)storeDescriptor;
+ (id)applicationSupportDirectoryPath;
+ (id)defaultPersistentStoreURL;
+ (id)defaultModelName;

- (void).cxx_destruct;
- (id)initWithStoreURL:(id)a0 modelURL:(id)a1;
- (id)description;

@end
