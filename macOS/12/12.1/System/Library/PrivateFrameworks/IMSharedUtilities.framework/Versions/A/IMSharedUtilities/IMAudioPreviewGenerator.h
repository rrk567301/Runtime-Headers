@interface IMAudioPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)writesToDisk;
+ (id)UTITypes;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)metadataExtension;
+ (BOOL)generatesPreview;
+ (BOOL)generatesMetadata;
+ (id)audioMedataForFileURL:(id)a0;

@end
