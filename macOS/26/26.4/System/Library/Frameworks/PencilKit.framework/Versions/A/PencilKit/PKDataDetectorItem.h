@class DDScannerResult;
@protocol PKDataDetectorItemDelegate;

@interface PKDataDetectorItem : PKDetectionItem

@property (weak, nonatomic) id<PKDataDetectorItemDelegate> delegate;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) struct __DDResult { } *coreResult;

+ (id)dataDetectorItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (id)strokeColor;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)drawing;
- (id)_baselinePath;

@end
