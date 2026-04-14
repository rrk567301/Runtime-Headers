@interface SHKImageConversionUtilities : NSObject

+ (void)_convertHEICItem:(id)a0 completion:(id /* block */)a1;
+ (id)_convertImageFile:(id)a0 toType:(id)a1;
+ (id)_destinationURLForURL:(id)a0 typeIdentifier:(id)a1;
+ (id)_fileURLFromItem:(id)a0;
+ (void)convertHEICImagesToPNGForItems:(id)a0 completion:(id /* block */)a1;

@end
