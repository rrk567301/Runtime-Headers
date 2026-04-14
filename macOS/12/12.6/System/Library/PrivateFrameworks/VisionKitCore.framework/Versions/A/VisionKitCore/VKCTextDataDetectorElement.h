@class NSArray, CRDataDetectorsOutputRegion;

@interface VKCTextDataDetectorElement : VKCBaseDataDetectorElement {
    NSArray *_boundingQuads;
}

@property (copy, nonatomic) NSArray *_children;
@property (readonly, nonatomic) CRDataDetectorsOutputRegion *ddOutputRegion;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) BOOL childrenCreated;
@property (readonly, nonatomic) unsigned long long crDataType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRange;

+ (id)dataDetectorElementFromCROutputRegion:(id)a0 parentDocument:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)dataType;
- (id)children;
- (id)debugMenu;
- (id)scannerResult;
- (id)boundingQuads;
- (BOOL)isTextDataDetector;
- (void)createChildrenIfNecessary;
- (id)initWithCROutputRegion:(id)a0 parentDocument:(id)a1;

@end
