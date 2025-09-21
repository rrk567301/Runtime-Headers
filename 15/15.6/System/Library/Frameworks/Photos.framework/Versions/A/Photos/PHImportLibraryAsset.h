@interface PHImportLibraryAsset : PHImportAsset {
    char _isPenultimate;
}

+ (char)isValidAsSidecar:(id)a0;

- (id)nameKey;
- (char)canDelete;
- (char)canReference;
- (void)configureSidecarTypeForExtension:(id)a0;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (char)isBase;
- (char)isRender;
- (char)isSidecar;
- (id)makeImportIdentifier;
- (char)shouldPreserveUUID;

@end
