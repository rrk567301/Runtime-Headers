@class CHDataDetectorQueryItem, DDScannerResult;

@interface PKDataDetectorQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (readonly, nonatomic) DDScannerResult *scannerResult;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)a0;

@end
