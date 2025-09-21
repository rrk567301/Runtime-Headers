@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (void)dealloc;
- (id)outputImage;
- (id)init;
- (id)inputKeys;
- (id)attributes;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)dummyImagesForImages:(id)a0;

@end
