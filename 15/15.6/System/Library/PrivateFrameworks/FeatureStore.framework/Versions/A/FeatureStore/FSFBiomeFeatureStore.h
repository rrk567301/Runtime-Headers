@class BMStoreConfig;

@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>

@property (readonly, nonatomic) BMStoreConfig *config;

+ (id)singletonInstance;

- (id)init;
- (void).cxx_destruct;
- (char)deleteAllStreams;
- (char)deleteStream:(id)a0;
- (id)getStream:(id)a0;

@end
