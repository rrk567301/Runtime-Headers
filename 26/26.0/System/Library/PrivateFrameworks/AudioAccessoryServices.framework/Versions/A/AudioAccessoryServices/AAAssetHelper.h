@interface AAAssetHelper : NSObject

+ (id)_bluetoothProductDefaultAsset:(unsigned int)a0;
+ (id)_bluetoothProductIDToAsset:(unsigned int)a0;
+ (id)_bluetoothProductIDToAsset:(unsigned int)a0 withColor:(unsigned char)a1;
+ (id)_bluetoothProductIDToCaseAsset:(unsigned int)a0 withColor:(unsigned char)a1;
+ (BOOL)_productCaseHasColors:(unsigned int)a0;
+ (BOOL)_productColorAssetExists:(unsigned int)a0 withColor:(unsigned char)a1;
+ (BOOL)_productHasColors:(unsigned int)a0;
+ (id)bluetoothProductIDToAsset:(unsigned int)a0 withColor:(unsigned char)a1 isCase:(BOOL)a2;

@end
