@class NSUUID, NSString, NSArray, CRNormalizedQuad;

@interface TextRecognition.CRLayoutParagraph : NSObject <CRLineWrappableGrouping> {
    void /* unknown type, empty encoding */ uuid;
    void /* function */ text;
    void /* function */ subregions;
}

@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *subregions;
@property (nonatomic, retain) CRNormalizedQuad *boundingQuad;
@property (nonatomic) BOOL canWrapToNextGroup;
@property (nonatomic, readonly) unsigned long long layoutDirection;
@property (nonatomic, readonly) unsigned long long textRegionType;

- (id)init;
- (void).cxx_destruct;

@end
