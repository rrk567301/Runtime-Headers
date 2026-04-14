@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}

+ (BOOL)isValidAsSidecar:(id)a0;

- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (BOOL)canReference;
- (id)nameKey;
- (BOOL)shouldPreserveUUID;
- (void)configureSidecarTypeForExtension:(id)a0;
- (BOOL)canDelete;
- (BOOL)isSidecar;
- (BOOL)isRender;
- (BOOL)isBase;
- (id)makeImportIdentifier;

@end
