@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}

+ (BOOL)isValidAsSidecar:(id)a0;

- (id)nameKey;
- (BOOL)canDelete;
- (BOOL)canReference;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (BOOL)isSidecar;
- (BOOL)shouldPreserveUUID;
- (void)configureSidecarTypeForExtension:(id)a0;
- (BOOL)isRender;
- (BOOL)isBase;
- (id)makeImportIdentifier;

@end
