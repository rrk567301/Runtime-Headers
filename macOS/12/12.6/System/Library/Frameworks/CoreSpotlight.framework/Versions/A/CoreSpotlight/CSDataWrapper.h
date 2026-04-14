@class NSData, NSObject;
@protocol OS_xpc_object;

@interface CSDataWrapper : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData;
@property (readonly, nonatomic) const void *dataPtr;
@property (nonatomic) unsigned long long dataSize;
@property (readonly, nonatomic) unsigned long long mapSize;
@property (readonly, nonatomic) BOOL mapped;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCValue:(id)a0 allowWritableSharedMemory:(BOOL)a1;
- (id)initWithXPCValue:(id)a0;

@end
