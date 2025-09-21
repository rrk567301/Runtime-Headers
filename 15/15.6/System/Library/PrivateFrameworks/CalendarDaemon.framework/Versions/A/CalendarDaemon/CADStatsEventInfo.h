@interface CADStatsEventInfo : NSObject {
    char _isDetached;
    char _hasRecurrenceRules;
    char _isAllDay;
    char _isBirthday;
    char _isHoliday;
    char _hasLocation;
    char _locationHasKnownSpatialData;
    char _hasClientLocation;
    char _preferredLocationIsAConferenceRoom;
    char _isCandidateForTravelAdvisories;
    char _isImmediatelyEligibleForTravelAdvisories;
    char _hasPredictedLocation;
    char _isOnCalendarIgnoringEventAlerts;
    char _isOnSharedCalendar;
    long long _travelAdvisoryBehavior;
    long long _participationStatus;
}

@end
