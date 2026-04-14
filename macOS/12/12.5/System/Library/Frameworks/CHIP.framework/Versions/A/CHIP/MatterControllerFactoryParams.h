@class NSArray, NSNumber;
@protocol CHIPPersistentStorageDelegate;

@interface MatterControllerFactoryParams : NSObject

@property (readonly, nonatomic) id<CHIPPersistentStorageDelegate> storageDelegate;
@property (retain, nonatomic) NSArray *paaCerts;
@property (retain, nonatomic) NSNumber *port;
@property (nonatomic) BOOL startServer;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end
