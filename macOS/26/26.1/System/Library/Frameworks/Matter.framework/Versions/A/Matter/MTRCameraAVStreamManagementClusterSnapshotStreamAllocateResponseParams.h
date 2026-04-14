@class NSNumber;

@interface MTRCameraAVStreamManagementClusterSnapshotStreamAllocateResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *snapshotStreamID;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x0; } *)a0;
- (id)initWithDecodableStruct:(const struct DecodableType { unsigned short x0; } *)a0;

@end
