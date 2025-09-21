@class NSString, FSWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FSBlockDeviceResource : FSResource {
    char _terminated;
    char _supportsBarrier;
    char _supportsPriority;
    char _supportsUnmap;
    unsigned long long _queueDepth;
}

@property (readonly) NSString *devicePath;
@property (readonly) unsigned long long partitionBase;
@property (readonly) int fileDescriptor;
@property (readonly, nonatomic) NSString *bsdName;
@property (readonly, nonatomic) char terminated;
@property char limited;
@property (retain) FSWorkQueue *fsExecQueue;
@property (readonly) NSString *devicePath;
@property (readonly) int fileDescriptor;
@property (readonly) unsigned long long partitionBase;
@property unsigned int notification;
@property struct IONotificationPort { } *notifyPort;
@property (retain) NSObject<OS_dispatch_queue> *ioKitQueue;
@property (retain) NSString *usingResourcePurpose;
@property char limited;
@property (readonly, copy) NSString *BSDName;
@property (readonly, getter=isWritable) char writable;
@property (readonly) unsigned long long blockSize;
@property (readonly) unsigned long long blockCount;
@property (readonly) unsigned long long physicalBlockSize;

+ (char)supportsSecureCoding;
+ (id)newProxyForBSDName:(id)a0 isWritable:(char)a1;
+ (void)openWithBSDName:(id)a0 writable:(char)a1 auditToken:(id)a2 replyHandler:(id /* block */)a3;
+ (id)proxyResourceForBSDName:(id)a0;
+ (id)proxyResourceForBSDName:(id)a0 isWritable:(char)a1;
+ (id)proxyResourceForBSDName:(id)a0 writable:(char)a1;
+ (id)resourceWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writable:(char)a3;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResource:(id)a0;
- (long long)kind;
- (void)terminate;
- (id)makeProxy;
- (void)revoke;
- (id)initProxyForBSDName:(id)a0 isWritable:(char)a1;
- (void)terminateLocked;
- (char)asynchronousMetadataFlushWithError:(id *)a0;
- (char)delayedMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (id)getResourceID;
- (id)initProxyForBSDName:(id)a0;
- (id)initWithBSDName:(id)a0 devicePath:(id)a1 fileDescriptor:(int)a2 writable:(char)a3;
- (char)metadataClear:(id)a0 withDelayedWrites:(char)a1 error:(id *)a2;
- (char)metadataFlushWithError:(id *)a0;
- (char)metadataPurge:(id)a0 error:(id *)a1;
- (char)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (char)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 readAheadExtents:(const struct { long long x0; unsigned long long x1; } *)a3 readAheadCount:(long long)a4 error:(id *)a5;
- (void)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (char)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
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
