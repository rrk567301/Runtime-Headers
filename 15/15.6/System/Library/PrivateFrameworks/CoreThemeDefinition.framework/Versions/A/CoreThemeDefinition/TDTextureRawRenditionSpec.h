@interface TDTextureRawRenditionSpec : TDTextureImageRenditionSpec

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (id)textureWithDocument:(id)a0;

@end
