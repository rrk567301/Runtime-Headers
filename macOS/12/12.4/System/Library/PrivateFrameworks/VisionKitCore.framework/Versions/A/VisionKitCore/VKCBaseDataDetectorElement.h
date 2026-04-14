@class NSUUID, NSArray, NSString, DDScannerResult, NSMenu;

@interface VKCBaseDataDetectorElement : VKCBaseElement <VKAnalysisElementDebugMenuProvider>

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) NSArray *boundingQuads;
@property (readonly, nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) BOOL isTextDataDetector;
@property (readonly, nonatomic) BOOL isMRCDataDetector;
@property (readonly, nonatomic) BOOL wantsMacOSHandCursor;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSMenu *debugMenu;

+ (id)stringArrayForVKDataDetectorTypes:(unsigned long long)a0;
+ (unsigned long long)dataDetectorTypesForScannerResult:(id)a0;

- (void).cxx_destruct;
- (long long)elementType;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isInspectableCellSelectable;

@end
