@class NSString, NSURL, NSArray;

@interface WBSAutoFillInternalFeedbackDiagnosticsData : NSObject

@property (readonly, copy, nonatomic) NSString *creationDateString;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSArray *formMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)writeTemporaryFileWithFormMetadata;

@end
