@class NSData;

@interface CBSoftwareUpdatePayloadInfo : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char softwareUpdateActionType;
@property (copy, nonatomic) NSData *softwareUpdateDataBlob;
@property (copy, nonatomic) NSData *softwareUpdateDataMask;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
