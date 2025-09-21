@class NSString;

@interface CHDeviceDataSource : NSObject <CHDeviceDataSource>

@property (readonly, nonatomic, getter=isBootLockEnabled) char bootLockEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
