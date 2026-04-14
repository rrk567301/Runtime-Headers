@class NSString, CalGroup, NSColor;

@interface CalCalendar : NSObject <NSCopying> {
    id _objectID;
    id _group;
    void *_reserved;
    BOOL _isEditable;
}

@property (retain) CalGroup *group;
@property (nonatomic) unsigned long long calendarItemTypes;
@property (copy) NSString *managedObjectIDString;
@property (copy) NSColor *color;
@property (copy) NSString *notes;
@property (copy) NSString *title;
@property (readonly) NSString *type;
@property (readonly) NSString *uid;
@property (readonly) BOOL isEditable;

+ (id)calendar;
+ (id)calendarFromRemoteManagedObject:(id)a0;
+ (id)_colorFromString:(id)a0;
+ (id)_colorStringRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)remoteManagedCalendarFromCalendar;
- (id)initWithUID:(id)a0 type:(id)a1 editable:(BOOL)a2;

@end
