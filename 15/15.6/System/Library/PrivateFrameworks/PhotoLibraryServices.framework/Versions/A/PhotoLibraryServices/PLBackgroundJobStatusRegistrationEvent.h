@class NSString, NSArray;

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property char registeredActivity;
@property (retain) NSString *registeredPriorities;
@property (retain) NSArray *workersResponsible;

- (void).cxx_destruct;
- (id)statusDump;

@end
