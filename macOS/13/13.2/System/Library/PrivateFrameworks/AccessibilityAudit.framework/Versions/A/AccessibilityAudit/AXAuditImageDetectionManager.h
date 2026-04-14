@interface AXAuditImageDetectionManager : NSObject

+ (id)sharedManager;

- (id)detectionResultsFromImageData:(id)a0;
- (id)detectedTextResultsForImageData:(id)a0;

@end
