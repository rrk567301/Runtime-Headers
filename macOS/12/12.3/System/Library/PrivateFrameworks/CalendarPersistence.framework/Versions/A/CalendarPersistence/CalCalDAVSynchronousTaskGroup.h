@class NSError, CoreDAVTaskGroup;

@interface CalCalDAVSynchronousTaskGroup : NSObject

@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CoreDAVTaskGroup *taskGroup;

- (void).cxx_destruct;
- (void)executeTaskGroup:(id)a0;

@end
