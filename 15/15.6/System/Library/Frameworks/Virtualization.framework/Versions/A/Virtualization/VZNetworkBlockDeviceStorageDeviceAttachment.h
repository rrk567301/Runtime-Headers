@class NSURL;
@protocol VZNetworkBlockDeviceStorageDeviceAttachmentDelegate;

@interface VZNetworkBlockDeviceStorageDeviceAttachment : VZStorageDeviceAttachment

@property (readonly, copy) NSURL *URL;
@property (readonly) double timeout;
@property (readonly, getter=isForcedReadOnly) char forcedReadOnly;
@property (readonly) long long synchronizationMode;
@property (weak) id<VZNetworkBlockDeviceStorageDeviceAttachmentDelegate> delegate;

+ (double)_defaultTimeout;
+ (char)_defaultReadOnly;
+ (long long)_defaultSynchronizationMode;
+ (char)validateURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 completionHandler:(id /* block */)a1;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithURL:(id)a0 timeout:(double)a1 forcedReadOnly:(char)a2 synchronizationMode:(long long)a3 error:(id *)a4;

@end
