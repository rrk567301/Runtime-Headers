@class NSString;

@interface DADataHandler : NSObject

@property (copy, nonatomic) NSString *changeTrackingID;
@property (nonatomic) void *container;

+ (id)newDataHandlerForDataclass:(long long)a0 container:(void *)a1 changeTrackingID:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)dataclass;
- (char)saveContainer;
- (void)openDB;
- (char)closeDBAndSave:(char)a0;
- (void *)copyLocalObjectFromId:(int)a0;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (void)drainSuperfluousChanges;
- (id)getDAExceptionObjectWithLocalItem:(void *)a0 originalEvent:(id)a1 account:(id)a2;
- (id)getDAObjectWithLocalItem:(void *)a0 serverId:(id)a1 account:(id)a2;
- (int)getIdFromLocalObject:(void *)a0;
- (id)initWithContainer:(void *)a0 changeTrackingID:(id)a1;
- (char)wipeServerIds;

@end
