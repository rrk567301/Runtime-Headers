@class SGEvent, NSString;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {
    SGEvent *_suggestedEvent;
}

@property (readonly, nonatomic) SGEvent *suggestedEvent;
@property (readonly, nonatomic) NSString *originAppName;

- (void).cxx_destruct;
- (unsigned long long)supportedActions;
- (BOOL)isSuggestion;

@end
