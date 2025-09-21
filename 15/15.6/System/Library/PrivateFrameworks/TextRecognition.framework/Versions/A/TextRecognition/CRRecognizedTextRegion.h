@class NSString, CRNormalizedPolyline, CRNormalizedQuad, NSArray, CRDetectedLineRegion;

@interface CRRecognizedTextRegion : NSObject <CRTextRegion, CRGrouping, NSCopying, NSMutableCopying>

@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) CRNormalizedPolyline *polygon;
@property unsigned long long layoutDirection;
@property (retain) NSString *text;
@property unsigned long long textRegionType;
@property double activationProbability;
@property double confidence;
@property (retain) NSString *locale;
@property char isCurved;
@property char whitespaceInjected;
@property (retain) NSArray *subregions;
@property (retain) NSArray *candidates;
@property (retain) CRDetectedLineRegion *detectedLineRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)createCharacterSubFeaturesTopWhiteSpacePoints:(id)a0 bottomWhiteSpacePoints:(id)a1 falsePositiveFiltering:(char)a2;
- (id)createSubregionsForString:(id)a0 topWhiteSpacePoints:(id)a1 bottomWhiteSpacePoints:(id)a2 hasBoundarySpacePoints:(char)a3 hasCharacterAndWordBoundaries:(char)a4 tokenPermutation:(id)a5;
- (id)initWithType:(unsigned long long)a0 detectedLineRegion:(id)a1;

@end
