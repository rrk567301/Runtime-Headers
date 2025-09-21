@class NSString, NSArray;

@interface PLBackgroundJobStatusSubmissionEvent : PLBackgroundJobStatusEvent

@property BOOL submittedTask;
@property (retain) NSString *submittedPriorities;
@property (retain) NSArray *workersResponsible;

- (void).cxx_destruct;
- (id)statusDump;

@end
