@class NSOrderedSet, NSArray;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *imageSizeSet;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pixelsWideRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pixelsHighRange;
@property (readonly, nonatomic) NSArray *enumeratedImageSizes;

+ (id)closestImageSizeInArray:(id)a0 toImageSize:(id)a1 preferDownScaling:(char)a2;
+ (id)closestImageSizeInPixelsWideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 pixelsHighRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toImageSize:(id)a2 preferInputAspectRatio:(char)a3;
+ (unsigned long long)locationClosestTo:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUnspecified;
- (id)allowedImageSizeClosestToPixelsWide:(long long)a0 pixelsHigh:(long long)a1 preferDownScaling:(char)a2 preferInputAspectRatio:(char)a3;
- (id)initWithEnumeratedImageSizes:(id)a0;
- (id)initWithPixelsWideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 pixelsHighRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isAllowedImageSize:(id)a0 error:(id *)a1;

@end
