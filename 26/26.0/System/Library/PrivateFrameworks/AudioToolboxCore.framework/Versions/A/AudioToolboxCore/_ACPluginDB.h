@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _ACPluginDB : NSObject <NSSecureCoding> {
    NSMutableDictionary *mSearchDirectories;
    BOOL mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> { struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mNotificationCallback;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mScanHashCallback;
    NSData *mCarbonComponentHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)path;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initialScanDirectory:(id)a0 priority:(int)a1 components:(void *)a2;
- (struct AudioComponentVector { void *x0; void *x1; void *x2; BOOL x3; })postInit:(BOOL)a0;
- (void)writeIfDirty;

@end
