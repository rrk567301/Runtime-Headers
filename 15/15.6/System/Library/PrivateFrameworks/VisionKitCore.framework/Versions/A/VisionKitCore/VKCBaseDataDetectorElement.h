@class NSUUID, NSArray, NSDictionary, DDScannerResult, NSString, NSMenu;

@interface VKCBaseDataDetectorElement : VKCBaseElement <VKAnalysisElementDebugMenuProvider>

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) NSArray *boundingQuads;
@property (readonly, nonatomic) double area;
@property (readonly, nonatomic) double maxLineHeight;
@property (readonly, nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) char isTextDataDetector;
@property (readonly, nonatomic) char isMRCDataDetector;
@property (readonly, nonatomic) char isUnitConversionDataDetector;
@property (readonly, nonatomic) char wantsMacOSHandCursor;
@property (retain, nonatomic) NSDictionary *groupedElementData;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSMenu *debugMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)dataDetectorTypesForScannerResult:(id)a0;
+ (id)stringArrayForVKDataDetectorTypes:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)elementType;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addGroupingDataToContext:(id)a0;
- (char)isInspectableCellSelectable;

@end
