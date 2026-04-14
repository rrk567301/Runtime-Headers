@class NSData;

@interface CBServiceUUIDParamInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *serviceUUID;
@property (copy, nonatomic) NSData *blobData;
@property (copy, nonatomic) NSData *maskData;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
