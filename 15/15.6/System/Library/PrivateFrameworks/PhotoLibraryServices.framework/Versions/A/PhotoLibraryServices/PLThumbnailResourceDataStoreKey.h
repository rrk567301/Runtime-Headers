@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey>

@property (nonatomic) struct PLThumbnailDataStoreKeyStruct_V1 { unsigned char version : 2; unsigned char type : 3; unsigned char unused : 1; unsigned int index : 27; } keyStruct;
@property (readonly, nonatomic) unsigned int tableType;
@property (readonly, nonatomic) int index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;
+ (unsigned int)recipeIDForTableType:(unsigned int)a0 inStore:(id)a1;
+ (char)representsSquareResourceForPayloadKeyData:(unsigned long long)a0;

- (char)isEqual:(id)a0;
- (int)index;
- (id)keyData;
- (char)isEqualToKey:(id)a0;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)a0;
- (char)isDerivative;
- (char)representsSquareResource;
- (void)tableType:(unsigned int *)a0 index:(int *)a1;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;
- (unsigned int)tableType;

@end
