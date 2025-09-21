@class NSArray;
@protocol MTRPersistentStorageDelegate;

@interface MTRControllerFactoryParams : MTRDeviceControllerFactoryParams

@property (readonly, nonatomic) id<MTRPersistentStorageDelegate> storageDelegate;
@property (nonatomic) char startServer;
@property (copy, nonatomic) NSArray *paaCerts;
@property (copy, nonatomic) NSArray *cdCerts;

@end
