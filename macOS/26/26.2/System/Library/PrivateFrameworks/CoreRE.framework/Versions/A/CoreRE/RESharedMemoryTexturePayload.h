@class NSObject;
@protocol OS_dispatch_data;

@interface RESharedMemoryTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;

+ (BOOL)supportsSecureCoding;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 descriptor:(id)a2;

@end
