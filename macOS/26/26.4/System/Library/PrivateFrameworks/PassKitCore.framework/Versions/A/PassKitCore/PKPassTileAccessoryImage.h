@class PKPassTileImage;

@interface PKPassTileAccessoryImage : PKPassTileAccessory

@property (retain, nonatomic) PKPassTileImage *image;

+ (BOOL)supportsSecureCoding;
+ (id)createAccessoryImageWithImage:(id)a0;
+ (id)createDefaultDisclosureAccessoryImage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;

@end
