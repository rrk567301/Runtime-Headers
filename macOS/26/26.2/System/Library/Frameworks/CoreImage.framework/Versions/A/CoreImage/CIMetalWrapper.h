@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)attributes;
- (id)inputKeys;
- (id)init;
- (void)dealloc;
- (id)dummyImagesForImages:(id)a0;

@end
