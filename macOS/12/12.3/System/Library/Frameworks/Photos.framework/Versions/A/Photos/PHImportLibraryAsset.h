@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}

+ (BOOL)isValidAsSidecar:(id)a0;

- (id)nameKey;
- (BOOL)canDelete;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (BOOL)canReference;
- (BOOL)isRender;
- (BOOL)isBase;
- (void)configureSidecarTypeForExtension:(id)a0;
- (id)makeImportIdentifier;
- (BOOL)isSidecar;
- (BOOL)shouldPreserveUUID;

@end
