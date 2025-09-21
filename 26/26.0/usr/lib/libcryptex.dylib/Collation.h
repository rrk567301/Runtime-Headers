@class CollationCore, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_os_log;

@interface Collation : NSObject

@property (retain, nonatomic) CollationCore *ccore;
@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (retain, nonatomic) NSObject<OS_xpc_object> *client_con;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *coll_description;

- (struct __CFDictionary { } *)package;
- (id)init;
- (id)initForUser:(unsigned int)a0;
- (void).cxx_destruct;
- (id)mountPointOfBundleID:(id)a0;
- (id)getValidPaths:(id)a0 forLabels:(id)a1;

@end
