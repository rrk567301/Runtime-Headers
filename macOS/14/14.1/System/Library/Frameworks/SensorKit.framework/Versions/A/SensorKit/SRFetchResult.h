@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying>

@property (retain) NSData *sampleData;
@property (retain) NSDictionary *metadata;
@property (retain) NSDictionary *configuration;
@property (retain) Class sampleClass;
@property (readonly, copy) id sample;
@property (readonly) double timestamp;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_sensorConfiguration;
- (id)initWithData:(id)a0 timestamp:(double)a1 metadata:(id)a2 configuration:(id)a3 sampleClass:(Class)a4;

@end
