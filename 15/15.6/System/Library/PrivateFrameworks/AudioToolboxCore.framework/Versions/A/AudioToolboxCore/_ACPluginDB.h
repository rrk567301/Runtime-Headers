@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _ACPluginDB : NSObject <NSSecureCoding> {
    NSMutableDictionary *mSearchDirectories;
    BOOL mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> { struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> { struct type { unsigned char __lx[32]; } __buf_; void *__f_; } __f_; } mNotificationCallback;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[32]; } __buf_; void *__f_; } __f_; } mScanHashCallback;
    NSData *mCarbonComponentHash;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)path;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)initialScanDirectory:(id)a0 priority:(int)a1 components:(void *)a2;
- (struct AudioComponentVector { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *x0; } x2; BOOL x3; })postInit:(char)a0;
- (void)updateCarbonComponentHash;
- (void)writeIfDirty;

@end
