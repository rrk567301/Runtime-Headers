@class NSString, NSDate, IADefaultsDataStore;

@interface IADataStoreObject : NSObject

@property (readonly, weak, nonatomic) IADefaultsDataStore *datastoreHandle;
@property (readonly, nonatomic) BOOL destroyed;
@property (readonly, nonatomic) int version;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *lastModified;

+ (id)type;

- (BOOL)persist;
- (BOOL)destroy;
- (void).cxx_destruct;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(BOOL)a2;

@end
