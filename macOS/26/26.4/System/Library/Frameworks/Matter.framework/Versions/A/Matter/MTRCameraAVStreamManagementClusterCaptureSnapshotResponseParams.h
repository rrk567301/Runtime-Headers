@class NSData, NSNumber, MTRCameraAVStreamManagementClusterVideoResolutionStruct;

@interface MTRCameraAVStreamManagementClusterCaptureSnapshotResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *imageCodec;
@property (copy, nonatomic) MTRCameraAVStreamManagementClusterVideoResolutionStruct *resolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
