@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)a0 previewURL:(id)a1 withFileExtension:(id)a2;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)a0 previewURL:(id)a1;
+ (double)contactMonogramDiameter;
+ (id)generateContactPlistFrom:(id)a0 previewURL:(id)a1 senderContext:(id)a2 error:(id *)a3;
+ (struct CGImage { } *)monogramForFirstName:(id)a0 lastName:(id)a1;
+ (struct CGImage { } *)newContactCardPreviewFrom:(id)a0 previewURL:(id)a1 senderContext:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 error:(id *)a4;
+ (struct CGImage { } *)newMonogramImageForData:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 previewURL:(id)a1 senderContext:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 error:(id *)a4;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1 error:(id *)a2;
+ (char)supportsBlastDoor;
+ (id)vCardDataForURL:(id)a0;

@end
