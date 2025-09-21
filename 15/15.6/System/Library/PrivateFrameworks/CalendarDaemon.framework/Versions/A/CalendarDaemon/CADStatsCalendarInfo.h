@interface CADStatsCalendarInfo : NSObject {
    char _isSelected;
    char _isHoliday;
    char _isSubscribed;
    char _isCalDAV;
    char _isAuthenticated;
    char _isShared;
    char _allowsEvents;
    char _isHidden;
    char _isBirthday;
    char _isFacebookBirthday;
    char _isFamily;
    char _isFoundInMail;
    char _isNaturalLanguageSuggestedEvents;
    char _isSharedByMe;
    char _isSyncedHolidayCalendar;
    unsigned long long _numSharees;
    unsigned long long _readOnlySharees;
    unsigned long long _readWriteSharees;
}

@end
