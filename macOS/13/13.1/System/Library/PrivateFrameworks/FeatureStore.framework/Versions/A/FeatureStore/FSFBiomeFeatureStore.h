@class BMStoreConfig;

@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>

@property (readonly, nonatomic) BMStoreConfig *config;

+ (id)singletonInstance;
+ (unsigned long long)maxStreamSizeInBytes;

- (id)init;
- (void).cxx_destruct;
- (id)getStream:(id)a0;
- (BOOL)deleteStream:(id)a0;
- (BOOL)deleteAllStreams;

@end
