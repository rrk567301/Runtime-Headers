@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) unsigned int user;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char machService;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char listener;
@property (nonatomic) char nonLaunching;
@property (nonatomic) char privateDaemon;
@property (nonatomic) char previouslyInitialized;

+ (id)constructArray:(id)a0;
+ (id)appIdentifierFromTeamAppTuple:(id)a0;
+ (void)array:(id)a0 setValue:(id)a1 atIndex:(long long)a2;
+ (id)constructDictionary:(id)a0;
+ (char)copyBoolForKey:(const char *)a0 fromXPCDictionary:(id)a1;
+ (double)copyDoubleForKey:(const char *)a0 fromXPCDictionary:(id)a1;
+ (id)copyNSArrayFromXPCArray:(id)a0;
+ (id)copyNSArrayFromXPCObject:(id)a0;
+ (id)copyNSDataForKey:(const char *)a0 fromXPCDictionary:(id)a1;
+ (id)copyNSDictionaryFromXPCObject:(id)a0;
+ (id)copyNSNumberArrayFromXPCArray:(id)a0;
+ (id)copyNSObject:(id)a0;
+ (id)copyNSString:(id)a0;
+ (id)copyNSStringArrayFromXPCArray:(id)a0;
+ (id)copyNSStringForKey:(const char *)a0 fromXPCDictionary:(id)a1;
+ (id)copyNSStringOrDictArrayFromXPCArray:(id)a0;
+ (id)copyNSStringSetFromXPCArray:(id)a0;
+ (id)copyPlistFromXPCObject:(id)a0;
+ (unsigned long long)copyUInt64ForKey:(const char *)a0 fromXPCDictionary:(id)a1;
+ (id)dataWrapperForKey:(const char *)a0 sizeKey:(const char *)a1 fromXPCDictionary:(id)a2;
+ (id)dataWrapperForKey:(const char *)a0 sizeKey:(const char *)a1 fromXPCDictionary:(id)a2 allowWritableSharedMemory:(char)a3;
+ (void)dictionary:(id)a0 setArray:(id)a1 forKey:(const char *)a2;
+ (void)dictionary:(id)a0 setNumberArray:(id)a1 forKey:(const char *)a2;
+ (void)dictionary:(id)a0 setPlistBytes:(struct __MDPlistBytes { } *)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
+ (void)dictionary:(id)a0 setPlistContainer:(struct _MDPlistContainer { } *)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
+ (char)dictionary:(id)a0 setSharedMemory:(void *)a1 forKey:(const char *)a2 size:(unsigned long long)a3 forSizeKey:(const char *)a4;
+ (void)dictionary:(id)a0 setStringArray:(id)a1 forKey:(const char *)a2;
+ (void)dictionary:(id)a0 setStringOrDictionaryArray:(id)a1 forKey:(const char *)a2;
+ (void)dictionary:(id)a0 setValue:(id)a1 forKey:(const char *)a2;
+ (void)dictionary:(id)a0 setXPCFdArray:(id)a1 forKey:(const char *)a2;
+ (void)journalDictionary:(id)a0 toFolderPath:(const char *)a1 forPID:(int)a2 withLabel:(const char *)a3 andID:(unsigned long long)a4;
+ (char)journalEnabled;
+ (id)processNameForPID:(int)a0;
+ (void)setJournalEnabled:(char)a0;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)resume;
- (void)suspend;
- (id)initWithServiceName:(id)a0;
- (void)handleError:(id)a0;
- (void)_lostClientConnection:(id)a0 error:(id)a1;
- (void)_setUser:(unsigned int)a0;
- (char)addClientConnectionIfAllowedForConfiguration:(id)a0;
- (char)addClientConnectionIfAllowedForConnection:(id)a0;
- (char)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (char)handleMessage:(id)a0 type:(struct _xpc_type_s { } *)a1 connection:(id)a2;
- (void)handleReply:(id)a0;
- (id)initListenerWithName:(id)a0;
- (id)initMachServiceListenerWithName:(id)a0;
- (id)initMachServiceListenerWithName:(id)a0 enableConnectionLogging:(char)a1;
- (id)initWithServiceName:(id)a0 machService:(char)a1;
- (id)initWithServiceName:(id)a0 machService:(char)a1 uuid:(id)a2;
- (char)lostClientConnection:(id)a0 error:(id)a1;
- (void)sendMessageAsync:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (void)startListener;

@end
