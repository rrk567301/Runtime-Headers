@class NSURL;
@protocol VZNetworkBlockDeviceStorageDeviceAttachmentDelegate;

@interface VZNetworkBlockDeviceStorageDeviceAttachment : VZStorageDeviceAttachment

@property (readonly, copy) NSURL *URL;
@property (readonly) double timeout;
@property (readonly, getter=isForcedReadOnly) BOOL forcedReadOnly;
@property (readonly) long long synchronizationMode;
@property (weak) id<VZNetworkBlockDeviceStorageDeviceAttachmentDelegate> delegate;

+ (double)_defaultTimeout;
+ (BOOL)_defaultReadOnly;
+ (long long)_defaultSynchronizationMode;
+ (BOOL)validateURL:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 completionHandler:(id /* block */)a1;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithURL:(id)a0 timeout:(double)a1 forcedReadOnly:(BOOL)a2 synchronizationMode:(long long)a3 error:(id *)a4;

@end
