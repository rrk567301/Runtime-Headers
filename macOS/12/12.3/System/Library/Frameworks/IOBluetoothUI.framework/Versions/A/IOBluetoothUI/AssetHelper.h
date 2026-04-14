@interface AssetHelper : NSObject

+ (id)sharedAssetHelper;
+ (id)findLocalizedStringForKey:(id)a0;
+ (id)findLocalizedStringForKey:(id)a0 default:(id)a1;

- (id)getDeviceNameForAppleProductID:(unsigned short)a0;
- (id)getImageURLForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;
- (id)getImageForAppleProductID:(unsigned short)a0 andColor:(unsigned char)a1;

@end
