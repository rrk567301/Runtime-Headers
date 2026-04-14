@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_xpc_object;

@interface CollationCore : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned int coll_uid;
@property (retain, nonatomic) NSMutableArray *coll_elems;
@property (retain, nonatomic) NSMutableArray *peer_array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)package;
- (unsigned int)getID;
- (id)initWithID:(unsigned int)a0;
- (id)initWithXPC:(id)a0;
- (void)setupHandler;
- (void)parseMessage:(id)a0;
- (BOOL)appendCollationElement:(id)a0;
- (BOOL)removeCollationElementWithPath:(id)a0;
- (BOOL)enumerateCollationElements:(id /* block */)a0;
- (BOOL)enumerateElements:(id /* block */)a0;
- (id)createEndpoint;

@end
