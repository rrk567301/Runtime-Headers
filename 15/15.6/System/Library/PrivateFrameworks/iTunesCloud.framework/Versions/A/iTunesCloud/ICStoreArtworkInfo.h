@class NSArray, NSDictionary, NSURL, ICStoreArtworkGradientInfo, ICStoreArtworkSizeInfo, NSString;

@interface ICStoreArtworkInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *sortedResponseArray;
@property (copy, nonatomic) NSArray *sortedSupportedSizesArray;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSArray *responseArray;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) ICStoreArtworkSizeInfo *sizeInfo;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (readonly, nonatomic) ICStoreArtworkGradientInfo *gradientInfo;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) unsigned long long imageTraits;
@property (readonly, nonatomic) NSArray *textGradient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2 preferP3ColorSpace:(char)a3;
- (id)initWithArtworkResponseArray:(id)a0;
- (id)initWithArtworkResponseDictionary:(id)a0;
- (id)initWithArtworkURL:(id)a0;
- (char)_hasOriginalSize;
- (void)_sortResponseArray;
- (void)_sortSupportedSizesArray;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2;
- (struct CGColor { } *)colorFromStringRepresentation:(id)a0;
- (struct CGColor { } *)copyColorWithKind:(id)a0;
- (id)initWithArtworkResponseValue:(id)a0;

@end
