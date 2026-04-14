@class CalManagedMessage, NSMutableSet;

@interface CalManagedDiff : CalManagedObject

@property (retain) NSMutableSet *set;
@property (retain) CalManagedMessage *message;

+ (id)entityName;

- (id)set;
- (void)setSet:(id)a0;
- (void)willRefresh:(BOOL)a0;

@end
