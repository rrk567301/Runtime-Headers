@class NSArray, NSNumber;
@protocol MTROTAProviderDelegate, MTRPersistentStorageDelegate;

@interface MTRControllerFactoryParams : NSObject

@property (readonly, nonatomic) id<MTRPersistentStorageDelegate> storageDelegate;
@property (retain, nonatomic) id<MTROTAProviderDelegate> otaProviderDelegate;
@property (copy, nonatomic) NSArray *paaCerts;
@property (copy, nonatomic) NSArray *cdCerts;
@property (copy, nonatomic) NSNumber *port;
@property (nonatomic) BOOL startServer;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end
