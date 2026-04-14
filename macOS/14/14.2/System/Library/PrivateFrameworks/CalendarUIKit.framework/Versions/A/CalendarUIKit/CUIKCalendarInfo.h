@class EKCalendar, NSString, CUIKGroupInfo, NSColor;

@interface CUIKCalendarInfo : NSObject {
    NSString *_title;
}

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) CUIKGroupInfo *group;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long customGroupType;
@property (nonatomic) BOOL filteredByFocus;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (void)_updateCustomGroupType;
- (id)stringForSharedCalendar;

@end
