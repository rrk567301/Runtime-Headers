@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {
    NSString *_title;
    NSString *_externalID;
    BOOL _predictable;
}

- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)updateActivity:(id)a0;
- (BOOL)_isMatchForRemindersList:(id)a0;
- (id)initWithRemindersList:(id)a0;
- (id)initWithRemindersList:(id)a0 forceLocal:(BOOL)a1;
- (id)remindersListFromStore:(id)a0;

@end
