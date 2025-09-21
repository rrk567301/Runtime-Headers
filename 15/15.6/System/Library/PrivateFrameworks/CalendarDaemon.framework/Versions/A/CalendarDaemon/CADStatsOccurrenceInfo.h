@interface CADStatsOccurrenceInfo : NSObject {
    char _isAllDay;
    char _isBirthday;
    char _isHoliday;
    char _isCandidateForTravelAdvisories;
    char _isImmediatelyEligibleForTravelAdvisories;
    char _hasResponseComment;
    char _organizerIsSelf;
    char _hasNonDefaultAlarm;
    char _hasLocation;
    char _hasClientLocation;
    char _hasLocationWithKnownSpatialData;
    char _hasConferenceRoomLocation;
    char _hasPredictedLocation;
    char _isOnCalendarThatSuppressesAlerts;
    char _isOnSharedCalendar;
    char _hasURL;
    char _hasNotes;
    unsigned long long _numAttendees;
    long long _travelAdvisoryBehavior;
    long long _status;
    long long _participationStatus;
    double _durationInMinutes;
    double _minutesUntilStart;
    double _minutesUntilEnd;
}

@end
