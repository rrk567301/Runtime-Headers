@class NSString;

@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource

@property (readonly, nonatomic) NSString *title;

- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (BOOL)_isMatchForSource:(id)a0 andTitle:(id)a1;
- (id)initWithSource:(id)a0 title:(id)a1;

@end
