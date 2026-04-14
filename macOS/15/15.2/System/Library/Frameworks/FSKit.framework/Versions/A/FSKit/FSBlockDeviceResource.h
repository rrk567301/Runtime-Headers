@class NSString, FSWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FSBlockDeviceResource : FSResource {
    BOOL _supportsBarrier;
    BOOL _supportsPriority;
    BOOL _supportsUnmap;
    unsigned long long _queueDepth;
}

@property (readonly) NSString *devicePath;
@property (readonly) unsigned long long partitionBase;
@property (readonly) int fileDescriptor;
@property (readonly, nonatomic) NSString *bsdName;
@property (retain) FSWorkQueue *fsExecQueue;
@property (readonly) NSString *devicePath;
@property (readonly) int fileDescriptor;
@property (readonly) unsigned long long partitionBase;
@property unsigned int notification;
@property struct IONotificationPort { } *notifyPort;
@property (retain) NSObject<OS_dispatch_queue> *ioKitQueue;
@property (retain) NSString *usingResourcePurpose;
@property (readonly, copy) NSString *BSDName;
@property (readonly, getter=isWritable) BOOL writable;
@property (readonly) unsigned long long blockSize;
@property (readonly) unsigned long long blockCount;
@property (readonly) unsigned long long physicalBlockSize;
@property (readonly, nonatomic, getter=isTerminated) BOOL terminated;

+ (BOOL)supportsSecureCoding;
+ (id)newProxyForBSDName:(id)a0 isWritable:(BOOL)a1;
+ (void)openWithBSDName:(id)a0 writable:(BOOL)a1 auditToken:(id)a2 replyHandler:(id /* block */)a3;
+ (id)proxyResourceForBSDName:(id)a0;
+ (id)proxyResourceForBSDName:(id)a0 isWritable:(BOOL)a1;
+ (id)proxyResourceForBSDName:(id)a0 writable:(BOOL)a1;
+ (id)resourceWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writable:(BOOL)a3;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResource:(id)a0;
- (long long)kind;
- (void)terminate;
- (BOOL)terminated;
- (id)makeProxy;
- (void)revoke;
- (id)initProxyForBSDName:(id)a0 isWritable:(BOOL)a1;
- (id)asynchronousMetadataFlush;
- (id)delayedMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (id)getResourceID;
- (id)initProxyForBSDName:(id)a0;
- (id)initWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writable:(BOOL)a3;
- (id)metadataClear:(id)a0 wait:(BOOL)a1;
- (id)metadataFlush;
- (id)metadataPurge:(id)a0;
- (id)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (id)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 readAheadExtents:(const struct { long long x0; unsigned long long x1; } *)a3 readAheadCount:(long long)a4;
- (id)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (void)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)readFirstSectorAndLog;
- (void)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)releaseNotification;
- (id)startUsingResource:(id)a0;
- (id)stopUsingResource:(id)a0;
- (void)synchronousReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)synchronousReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;

@end
