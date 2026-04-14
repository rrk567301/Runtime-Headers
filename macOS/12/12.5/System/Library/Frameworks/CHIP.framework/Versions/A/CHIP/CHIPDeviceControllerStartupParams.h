@class NSData;
@protocol CHIPKeypair;

@interface CHIPDeviceControllerStartupParams : NSObject

@property (nonatomic) unsigned short vendorId;
@property (retain, nonatomic) id<CHIPKeypair> rootCAKeypair;
@property (nonatomic) unsigned long long fabricId;
@property (retain, nonatomic) NSData *ipk;

- (void).cxx_destruct;
- (id)initWithKeypair:(id)a0;

@end
