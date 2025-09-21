@class NSString, NSDate, IADefaultsDataStore;

@interface IADataStoreObject : NSObject

@property (readonly, weak, nonatomic) IADefaultsDataStore *datastoreHandle;
@property (readonly, nonatomic) char destroyed;
@property (readonly, nonatomic) int version;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *lastModified;

+ (id)type;

- (void).cxx_destruct;
- (char)destroy;
- (char)persist;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(char)a2;

@end
