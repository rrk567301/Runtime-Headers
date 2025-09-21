@interface IMPassPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

@property (class, readonly, nonatomic, getter=isSupported) char supported;

+ (id)temporaryDirectory;
+ (id)UTITypes;
+ (id)_dictionaryRepresentationForColor:(id)a0;
+ (id)_dictionaryRepresentationForPassText:(id)a0;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a2 error:(id *)a3;
+ (char)generatesMetadata;
+ (char)generatesPreview;
+ (id)metadataExtension;
+ (id)previewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a2 error:(id *)a3;

@end
