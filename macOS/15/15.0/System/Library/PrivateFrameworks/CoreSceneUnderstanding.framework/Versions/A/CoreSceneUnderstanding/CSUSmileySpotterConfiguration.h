@class NSString;

@interface CSUSmileySpotterConfiguration : NSObject

@property (retain) NSString *headModelPath;
@property long long revision;
@property float threshold;

+ (id)CSUSmileySpotterConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)getConfigurationForCSUSmileySpotter_v1_0_EnglishWithError:(id *)a0;

- (void).cxx_destruct;
- (id)initCSUSmileySpotterConfigurationForRevision:(long long)a0 modelPath:(id)a1 threshold:(float)a2;

@end
