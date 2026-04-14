@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)inputKeys;
- (id)attributes;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (void)dealloc;
- (id)dummyImagesForImages:(id)a0;

@end
