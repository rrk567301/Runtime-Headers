@interface PFCameraMetadataSerialization : NSObject

+ (id)deserializedMetadataFromPrivateClientMetadata:(id)a0 error:(id *)a1;
+ (id)deserializedMetadataFromData:(id)a0 error:(id *)a1;
+ (id)serializedDataFromClientMetadata:(id)a0 error:(id *)a1;

@end
