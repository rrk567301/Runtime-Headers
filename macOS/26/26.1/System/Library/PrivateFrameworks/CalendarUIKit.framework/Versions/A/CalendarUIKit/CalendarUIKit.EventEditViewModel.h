@interface CalendarUIKit.EventEditViewModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _event;
    void /* unknown type, empty encoding */ _eventModelObject;
    void /* unknown type, empty encoding */ _originalEventModelObject;
    void /* unknown type, empty encoding */ _calendars;
    void /* unknown type, empty encoding */ _needsInlineEditButton;
    void /* unknown type, empty encoding */ _pendingChanges;
    void /* unknown type, empty encoding */ _eventCreationMethod;
    void /* unknown type, empty encoding */ _isEditing;
    void /* unknown type, empty encoding */ _allowsEditing;
    void /* unknown type, empty encoding */ _eventDataSource;
    void /* unknown type, empty encoding */ _editDataSource;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _hasModifiedAttendeesFromSuggestion;
    void /* unknown type, empty encoding */ _pushAction;
    void /* unknown type, empty encoding */ ___title;
    void /* unknown type, empty encoding */ _autocompleteItems;
    void /* unknown type, empty encoding */ ___location;
    void /* unknown type, empty encoding */ _virtualConferenceStatus;
    void /* unknown type, empty encoding */ ___dateInterval;
    void /* unknown type, empty encoding */ _dateIntervalImplicit;
    void /* unknown type, empty encoding */ ___allDay;
    void /* unknown type, empty encoding */ _timeZone;
    void /* unknown type, empty encoding */ _endTimeZone;
    void /* unknown type, empty encoding */ ___recurrenceRule;
    void /* unknown type, empty encoding */ _selectedCalendarID;
    void /* unknown type, empty encoding */ _displayOrganizer;
    void /* unknown type, empty encoding */ ___displayPeople;
    void /* unknown type, empty encoding */ _selectedAvailability;
    void /* unknown type, empty encoding */ _isPrivate;
    void /* unknown type, empty encoding */ _notes;
    void /* unknown type, empty encoding */ _url;
    void /* unknown type, empty encoding */ _attachments;
    void /* unknown type, empty encoding */ _shouldEnableDoneButton;
    void /* unknown type, empty encoding */ availabilityQueue;
    void /* unknown type, empty encoding */ _numberOfConflicts;
    void /* unknown type, empty encoding */ _displayPeopleIdsWithAvailStatus;
    void /* unknown type, empty encoding */ _titleSelection;
    void /* unknown type, empty encoding */ _focusAndSelectStartDate;
    void /* unknown type, empty encoding */ _focusAndSelectTitle;
    void /* unknown type, empty encoding */ _focusTitle;
    void /* unknown type, empty encoding */ _shouldRecordPrecommitEvent;
    void /* unknown type, empty encoding */ _precommitSerializedEvent;
    void /* unknown type, empty encoding */ __autocompleteSearchString;
    void /* unknown type, empty encoding */ __autocompleteTimer;
    void /* unknown type, empty encoding */ __pendingSearch;
    void /* unknown type, empty encoding */ __allowTitleChangesToKickoffAutocomplete;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)beginAutocompleteSearch;

@end
