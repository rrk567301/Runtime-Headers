@class DAAccount, CalDAVCalendarSearchTask;

@interface DADClientHolidayCalendarFetchDelegate : DADClientDelegate {
    CalDAVCalendarSearchTask *_searchTask;
    DAAccount *_syncingAccount;
}

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)fetchHolidayCalendars;
- (void)_handleCalendarSearchResults:(id)a0;
- (void)_sendResults:(id)a0;
- (void)_sendCompletionWithError:(id)a0 retryThrottleTime:(double)a1;
- (id)syncingAccount;
- (id)_getThrottleDateIfApplicable;
- (void)_setThrottledRetryDateUsingTimeInterval:(double)a0;
- (void)_addAuthenticationHeaders;

@end
