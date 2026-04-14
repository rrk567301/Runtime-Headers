@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface XProtectScanResult : NSObject

@property (retain) NSURL *fileURL;
@property int assessmentResult;
@property (retain) NSNumber *signatureVersion;
@property (retain) NSString *signatureName;
@property (retain) NSDate *scanTime;
@property (retain) NSArray *errors;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 assessmentResult:(int)a1 signatureVersion:(id)a2 signatureName:(id)a3 scanTime:(id)a4;

@end
