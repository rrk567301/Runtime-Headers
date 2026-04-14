@class NSString;

@interface ASDTIPCAudioDeviceClient : NSObject

@property (retain, nonatomic) NSString *deviceID;

- (void).cxx_destruct;
- (BOOL)setPowerState:(unsigned int)a0;
- (BOOL)getPowerState:(unsigned int *)a0;
- (id)getProperty:(unsigned int)a0 withDataSize:(unsigned long long)a1;
- (id)initWithIPCAudioDeviceID:(id)a0;
- (BOOL)setProperty:(unsigned int)a0 withData:(id)a1;

@end
