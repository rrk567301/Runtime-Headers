@class NSDictionary;

@interface CHTilingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *documentTiles;
@property (readonly, nonatomic) double tileSizeFactor;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTilesPerPosition:(id)a0 tileSizeFactor:(double)a1;
- (BOOL)isEqualToCHDocumentTilingResult:(id)a0;
- (void)writeTilesToFileInFolder:(id)a0 basename:(id)a1 strokeProvider:(id)a2;
- (void)writeTilesToFileInFolder:(id)a0 strokeProvider:(id)a1;
- (void)writeTilesToFileWithStrokeProvider:(id)a0;

@end
