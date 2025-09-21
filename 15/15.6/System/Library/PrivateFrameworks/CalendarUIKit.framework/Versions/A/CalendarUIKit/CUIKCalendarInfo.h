@class EKCalendar, NSArray, NSString, CUIKGroupInfo, NSColor;

@interface CUIKCalendarInfo : NSObject {
    NSString *_title;
}

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) NSArray *otherCalendars;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic) char selected;
@property (weak, nonatomic) CUIKGroupInfo *group;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) char isSubscribed;
@property (readonly, nonatomic) char isShared;
@property (readonly, nonatomic) char isPublished;
@property (readonly, nonatomic) char isEditable;
@property (readonly, nonatomic) char isIntegration;
@property (nonatomic) char isEnabled;
@property (nonatomic) unsigned long long customGroupType;
@property (nonatomic) char filteredByFocus;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (void)addCalendar:(id)a0;
- (void)_updateCustomGroupType;
- (id)stringForSharedCalendar;

@end
