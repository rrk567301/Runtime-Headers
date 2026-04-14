@class PKPassTileImage;

@interface PKPassTileAccessoryImage : PKPassTileAccessory

@property (retain, nonatomic) PKPassTileImage *image;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;

@end
