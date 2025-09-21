@class CHTilePosition, NSArray, NSSet;

@interface CHDocumentTile : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long _savedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHTilePosition *tilePosition;
@property (readonly, nonatomic) NSArray *subtilePositions;
@property (readonly, nonatomic) BOOL hasSubtiles;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) NSArray *orderedStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *contentStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *overlapStrokeIdentifiers;
@property (readonly, nonatomic) NSSet *contextStrokeIdentifiers;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTilePosition:(id)a0 scale:(double)a1;
- (id)initWithTilePosition:(id)a0 subtilePositions:(id)a1 scale:(double)a2 origin:(struct CGPoint { double x0; double x1; })a3 orderedStrokeIdentifiers:(id)a4 contentStrokeIdentifiers:(id)a5 overlapStrokeIdentifiers:(id)a6 contextStrokeIdentifiers:(id)a7;

@end
