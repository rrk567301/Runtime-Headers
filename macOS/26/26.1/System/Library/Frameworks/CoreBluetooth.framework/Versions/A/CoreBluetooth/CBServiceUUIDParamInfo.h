@class NSData;

@interface CBServiceUUIDParamInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *serviceUUID;
@property (copy, nonatomic) NSData *blobData;
@property (copy, nonatomic) NSData *maskData;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
