@class NSURL, NSData;

@interface ISStoreMapTable : NSObject

@property (retain) NSURL *url;
@property (readonly) NSData *data;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataLock;
@property (readonly) unsigned long long initialCapacity;

- (void)setBytes:(const void *)a0 size:(unsigned long long)a1 forUUID:(unsigned char[16])a2;
- (void)removeAll;
- (void)compact;
- (id)initWithURL:(id)a0 capacity:(unsigned long long)a1;
- (void)addData:(id)a0 forUUID:(id)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)removeDataForUUID:(id)a0;
- (id)dataForUUID:(id)a0;
- (void)removeDataForUUID:(id)a0 passingTest:(id /* block */)a1;
- (void)_extend;
- (void)enumerateWithUUID:(unsigned char[16])a0 block:(id /* block */)a1;
- (void)_extendData;
- (void).cxx_destruct;
- (void)_extendWithMultiplyer:(float)a0;

@end
