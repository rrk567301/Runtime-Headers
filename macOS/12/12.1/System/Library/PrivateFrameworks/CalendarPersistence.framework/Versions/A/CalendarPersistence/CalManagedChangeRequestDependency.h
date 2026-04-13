@class CalManagedChangeRequest;

@interface CalManagedChangeRequestDependency : CalManagedObject

@property (retain) CalManagedChangeRequest *dependent;
@property (retain) CalManagedChangeRequest *dependency;

+ (id)entityName;

@end
