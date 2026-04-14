@class BMStreamDatastoreReader, NSMutableDictionary;

@interface BMStorePublisherManagerProtectedState : NSObject

@property (retain, nonatomic) BMStreamDatastoreReader *localDatastore;
@property (retain, nonatomic) NSMutableDictionary *remoteDatastores;

- (void).cxx_destruct;
- (id)init;

@end
