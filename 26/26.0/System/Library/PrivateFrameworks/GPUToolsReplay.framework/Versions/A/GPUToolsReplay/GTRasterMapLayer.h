@class NSArray;

@interface GTRasterMapLayer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct GTSize { unsigned long long width; unsigned long long height; unsigned long long depth; } size;
@property (retain, nonatomic) NSArray *horizontalLogicalCoordinatesAtPhysicalTileBoundaries;
@property (retain, nonatomic) NSArray *verticalLogicalCoordinatesAtPhysicalTileBoundaries;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
