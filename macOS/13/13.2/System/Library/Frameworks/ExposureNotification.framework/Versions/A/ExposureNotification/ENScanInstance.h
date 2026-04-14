@interface ENScanInstance : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char minimumAttenuation;
@property (nonatomic) unsigned char typicalAttenuation;
@property (nonatomic) long long secondsSinceLastScan;

- (id)description;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;

@end
