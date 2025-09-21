@class NSString, NSArray, PHCloudIdentifier;

@interface PHProjectAssetElement : PHProjectElement <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *annotation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) NSArray *regionsOfInterest;
@property (readonly, nonatomic) PHCloudIdentifier *cloudAssetIdentifier;
@property (readonly, nonatomic) char horizontallyFlipped;
@property (readonly, nonatomic) char verticallyFlipped;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(char)a0;
- (id)initWithAssetIdentifier:(id)a0 weight:(id)a1 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithAssetIdentifier:(id)a0 weight:(id)a1 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 horizontallyFlipped:(char)a3 verticallyFlipped:(char)a4;

@end
