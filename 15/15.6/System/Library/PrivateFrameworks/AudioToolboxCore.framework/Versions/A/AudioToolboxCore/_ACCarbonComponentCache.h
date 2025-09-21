@class NSData;

@interface _ACCarbonComponentCache : NSObject <NSSecureCoding> {
    struct AudioComponentVector { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *__value_; } __end_cap_; BOOL mSorted; } mComponentVector;
    NSData *mFileSystemHash;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)create;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (struct AudioComponentVector { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *x0; } x2; BOOL x3; })initialScan:(id)a0;
- (void)rescan:(id)a0 added:(void *)a1 removed:(void *)a2;
- (void)save;
- (id)serializeAudioComponentVector:(void *)a0;

@end
