@class NSString;

@interface CUIKUpdatedEventProperties : NSObject {
    void /* unknown type, empty encoding */ updatedEventProperties;
}

@property (nonatomic, readonly) BOOL titleChanged;
@property (nonatomic, readonly) NSString *title;

- (id)init;
- (void)setAllDay:(BOOL)a0;
- (void)setLocation:(id)a0;
- (void)setTitle:(id)a0;
- (void)setParticipants:(id)a0;
- (void).cxx_destruct;
- (void)setRecurrenceRule:(id)a0;
- (void)setEndTimeZone:(id)a0;
- (void)setStartTimeZone:(id)a0;
- (void)setEndDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2;
- (void)setStartDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2;

@end
