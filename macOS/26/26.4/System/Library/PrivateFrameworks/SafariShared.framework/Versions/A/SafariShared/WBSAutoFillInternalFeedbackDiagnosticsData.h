@class NSString, NSArray, NSURL, NSSet;

@interface WBSAutoFillInternalFeedbackDiagnosticsData : NSObject

@property (readonly, copy, nonatomic) NSString *creationDateString;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSArray *formMetadata;
@property (copy, nonatomic) NSSet *sensitiveValuesForRedaction;

- (void).cxx_destruct;
- (id)init;
- (id)writeTemporaryFileWithFormMetadata;

@end
