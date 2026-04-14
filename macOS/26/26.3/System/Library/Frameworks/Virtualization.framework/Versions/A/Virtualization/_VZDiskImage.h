@class NSURL, NSString, NSNumber;

@interface _VZDiskImage : NSObject {
    struct Descriptor { struct DiskImageFormat *format; int cache_mode; struct vector<Base::PropertyBag, std::allocator<Base::PropertyBag>> { struct PropertyBag *__begin_; struct PropertyBag *__end_; struct { struct PropertyBag *__cap_; } ; } parameters; BOOL per_io_encrypted; } _descriptor;
    long long _backendType;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;
@property (readonly) NSString *identifier;
@property (copy) NSNumber *updateDiskSize;

- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDescriptor:(id)a0 error:(id *)a1;

@end
