@class BMStoreConfig;

@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>

@property (readonly, nonatomic) BMStoreConfig *config;

+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)deleteAllStreams;
- (BOOL)deleteStream:(id)a0;
- (id)getStream:(id)a0;

@end
