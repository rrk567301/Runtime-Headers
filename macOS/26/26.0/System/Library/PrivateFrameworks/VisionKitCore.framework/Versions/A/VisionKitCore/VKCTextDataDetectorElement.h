@class NSArray, CRDataDetectorsOutputRegion, DDScannerResult;

@interface VKCTextDataDetectorElement : VKCBaseDataDetectorElement {
    NSArray *_boundingQuads;
    DDScannerResult *_scannerResult;
}

@property (copy, nonatomic) NSArray *_children;
@property (readonly, nonatomic) CRDataDetectorsOutputRegion *ddOutputRegion;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) BOOL childrenCreated;
@property (readonly, nonatomic) unsigned long long crDataType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRange;

+ (id)dataDetectorElementFromCROutputRegion:(id)a0 parentDocument:(id)a1;

- (unsigned long long)dataType;
- (id)children;
- (void).cxx_destruct;
- (id)debugMenu;
- (id)scannerResult;
- (id)boundingQuads;
- (void)addGroupingDataToContext:(id)a0;
- (void)createChildrenIfNecessary;
- (id)initWithCROutputRegion:(id)a0 parentDocument:(id)a1;
- (id)initWithScannerResult:(id)a0;
- (BOOL)isTextDataDetector;
- (BOOL)isUnitConversionDataDetector;

@end
