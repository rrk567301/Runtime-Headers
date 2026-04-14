@class NSCountedSet;
@protocol CalCalendarDatabaseIntegrityErrorReportingDelegate;

@interface CalDatabaseIntegrityErrors : NSObject

@property (readonly, nonatomic) NSCountedSet *errors;
@property (retain, nonatomic) id<CalCalendarDatabaseIntegrityErrorReportingDelegate> delegate;

- (void).cxx_destruct;
- (id)init;

@end
