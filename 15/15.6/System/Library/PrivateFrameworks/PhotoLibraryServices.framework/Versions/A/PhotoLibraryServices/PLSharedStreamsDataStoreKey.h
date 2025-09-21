@class NSString;

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}

+ (id)_keyDataWithRelativePath:(id)a0 type:(unsigned int)a1;
+ (id)_relativeDCIMFilePathForPersonID:(id)a0 albumID:(id)a1 dcimDirectory:(id)a2 fileName:(id)a3;
+ (id)_relativeFilePathForPersonID:(id)a0 albumID:(id)a1 fileName:(id)a2;
+ (id)_replacementPathExtensionForType:(unsigned int)a0;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)keyData;
- (char)isEqualToKey:(id)a0;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)a0;
- (char)isDerivative;
- (unsigned int)recipeIDForAssetID:(id)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (id)initWithAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (id)initWithKeyStruct:(const void *)a0;

@end
