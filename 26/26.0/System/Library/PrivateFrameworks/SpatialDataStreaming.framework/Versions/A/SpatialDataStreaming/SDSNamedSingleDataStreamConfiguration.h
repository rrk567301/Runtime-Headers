@class SDSDataBufferConfiguration, NSString, SDSDataLayoutListNode, SDSNetworkConfiguration;

@interface SDSNamedSingleDataStreamConfiguration : NSObject <SDSSingleDataLayoutStreamConfiguration, SDSStreamConfiguration, SDSNetworkConfigurationStreamConfiguration, SDSNamedStreamConfiguration, SDSDataBufferConfigurationStreamConfiguration> {
    void /* function */ name;
    void /* unknown type, empty encoding */ _resolvedDataLayout;
    void /* unknown type, empty encoding */ resolvedDataLayoutLock;
}

@property (nonatomic, readonly) SDSDataLayoutListNode *dataLayoutList;
@property (nonatomic, readonly) SDSNetworkConfiguration *networkConfiguration;
@property (nonatomic, readonly) SDSDataBufferConfiguration *dataBufferConfiguration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *description;

+ (id)streamConfigurationwithName:(id)a0 dataLayoutList:(id)a1;
+ (id)streamConfigurationwithName:(id)a0 dataLayoutList:(id)a1 dataBufferConfiguration:(id)a2;
+ (id)streamConfigurationwithName:(id)a0 dataLayoutList:(id)a1 dataBufferConfiguration:(id)a2 networkConfiguration:(id)a3;
+ (id)streamConfigurationwithName:(id)a0 dataLayoutList:(id)a1 networkConfiguration:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dataLayoutList:(id)a1;
- (id)initWithName:(id)a0 dataLayoutList:(id)a1 dataBufferConfiguration:(id)a2;
- (id)initWithName:(id)a0 dataLayoutList:(id)a1 dataBufferConfiguration:(id)a2 networkConfiguration:(id)a3;
- (id)initWithName:(id)a0 dataLayoutList:(id)a1 networkConfiguration:(id)a2;

@end
