@class NSString;

@interface PLColorSpace : NSObject

@property (copy, nonatomic) NSString *colorSpaceName;

+ (id)colorSpaceFromName:(id)a0;
+ (id)commonColorSpace_displaySpace;
+ (id)commonColorSpace_sRGB;
+ (id)commonColorSpace_unspecified;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;

@end
