@class CRRegionGeometryInfo;

@interface CRRegionGroupGeometryInfo : CRRegionGeometryInfo

@property (readonly) CRRegionGeometryInfo *firstSubregion;
@property (readonly) CRRegionGeometryInfo *lastSubregion;
@property (readonly) char isCenterJustified;
@property (readonly) char isLeftJustified;
@property (readonly) char isRightJustified;

- (void).cxx_destruct;
- (id)initFromRegionGroup:(id)a0;

@end
