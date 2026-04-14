@class NSString;

@interface CalManagedCalendarSplitDualTypeChangeRequest : CalManagedCalendarChangeRequest

@property BOOL isPendingEventMultiMoves;
@property BOOL isPendingTaskMultiMoves;
@property (retain, nonatomic) NSString *destinationCalendarURI;

+ (id)insertCalendarSplitDualTypeChangeRequestWithType:(int)a0 sourceUID:(id)a1 uri:(id)a2 principalUID:(id)a3 inboxURI:(id)a4 isPendingEventMultiMoves:(BOOL)a5 isPendingTaskMultiMoves:(BOOL)a6 inManagedObjectContext:(id)a7;

@end
