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
+ (BOOL)representsSquareResourceForPayloadKeyData:(unsigned long long)a0;
+ (unsigned int)recipeIDForTableType:(unsigned int)a0 inStore:(id)a1;

- (id)fileURLForAssetID:(id)a0;
- (unsigned int)tableType;
- (BOOL)isDerivative;
- (id)initWithKeyStruct:(const void *)a0;
- (BOOL)representsSquareResource;
- (unsigned int)resourceVersion;
- (BOOL)isEqualToKey:(id)a0;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (unsigned int)resourceType;
- (int)index;
- (id)keyData;
- (BOOL)isEqual:(id)a0;
- (void)tableType:(unsigned int *)a0 index:(int *)a1;

@end
