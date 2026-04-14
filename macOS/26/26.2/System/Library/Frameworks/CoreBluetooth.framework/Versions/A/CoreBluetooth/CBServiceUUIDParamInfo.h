@class NSData;

@interface CBServiceUUIDParamInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *serviceUUID;
@property (copy, nonatomic) NSData *blobData;
@property (copy, nonatomic) NSData *maskData;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (void)encodeWithXPCObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
