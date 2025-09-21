@interface NEIKEv2SPI : NSObject

@property (readonly, nonatomic) unsigned long long protocol;

- (id)init;
- (id)copySPIData;

@end
