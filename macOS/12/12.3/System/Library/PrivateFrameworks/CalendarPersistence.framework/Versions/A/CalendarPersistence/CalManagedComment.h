@class NSString, NSURL, NSDate, CalManagedCalendarItem;

@interface CalManagedComment : CalManagedObject

@property (retain) NSString *commentString;
@property BOOL userGeneratedCommentChanged;
@property (retain) NSURL *address;
@property (retain) NSDate *timeStamp;
@property (retain) CalManagedCalendarItem *item;

+ (id)entityName;
+ (BOOL)userGeneratedCommentChangedWithPreviousComment:(id)a0 newComment:(id)a1;

- (void)willRefresh:(BOOL)a0;
- (void)importiCalendarProperty:(id)a0 inComponent:(id)a1 fromDocument:(id)a2 inCalendar:(id)a3;
- (id)_iCalendarElementWithOptions:(unsigned long long)a0;
- (id)uniqueKeyForObject;
- (void)updateWithEntity:(id)a0;

@end
