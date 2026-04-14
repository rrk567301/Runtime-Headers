@class NSXPCListenerEndpoint, NSString, ATXHeuristicDevice, NSXPCListener;

@interface ATXHeuristicDataSourcesServer : NSObject <NSXPCListenerDelegate, ATXHeuristicDataSources> {
    ATXHeuristicDevice *_device;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)getLocationForMostRelevantTripInRangeFrom:(id)a0 to:(id)a1 callback:(id /* block */)a2;
- (void)allHandlesForContact:(id)a0 callback:(id /* block */)a1;
- (void)callNewerThan:(double)a0 showIncoming:(BOOL)a1 showOutgoing:(BOOL)a2 missedOnly:(BOOL)a3 callback:(id /* block */)a4;
- (void)bestHandleForContact:(id)a0 service:(id)a1 callback:(id /* block */)a2;
- (void)contactsWithName:(id)a0 callback:(id /* block */)a1;
- (void)birthdaysWithCallback:(id /* block */)a0;
- (void)batteryInformationWithCallback:(id /* block */)a0;
- (void)calendarEventsFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void)alarmsFromDate:(id)a0 toDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)alarmTimeOfDay:(id /* block */)a0;
- (void)fetchWidgetMetadataForAppBundleIds:(id)a0 callback:(id /* block */)a1;
- (void)nlEventsWithCallback:(id /* block */)a0;
- (void)modeCorrelatedAppsInCurrentModeWithCallback:(id /* block */)a0;
- (void)travelTimeInfoForEventID:(id)a0 location:(id)a1 expectedArrivalDate:(id)a2 transportType:(id)a3 localOnlyAfterFirstUpdate:(BOOL)a4 callback:(id /* block */)a5;
- (void)passesWithStyle:(id)a0 callback:(id /* block */)a1;
- (void)unreadMessagesWithLimit:(long long)a0 callback:(id /* block */)a1;
- (void)vipsWithCallback:(id /* block */)a0;
- (void)peopleSuggestionsWithCallback:(id /* block */)a0;
- (void)contactsWithPhone:(id)a0 callback:(id /* block */)a1;
- (void)duetInteractionCountForHandles:(id)a0 sinceDate:(id)a1 callback:(id /* block */)a2;
- (void)isFocusModeActive:(id /* block */)a0;
- (void)visibleCalendarsWithCallback:(id /* block */)a0;
- (void)flightStatusForFlight:(id)a0 callback:(id /* block */)a1;
- (void)predictedBedTimeWithCallback:(id /* block */)a0;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getEventsWithProminentFeature:(id)a0 callback:(id /* block */)a1;
- (void)bestAppSuggestionWithCallback:(id /* block */)a0;
- (id)init;
- (void)contactsWithIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 callback:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)contactsWithEmail:(id)a0 callback:(id /* block */)a1;
- (void)favoritesWithContacts:(id)a0 callback:(id /* block */)a1;
- (void)obtainOneTimeLocationWithCallback:(id /* block */)a0;
- (void)contentsWithCallback:(id /* block */)a0;
- (void)dealloc;
- (void)holidaysFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void)scheduledBedTimeWithCallback:(id /* block */)a0;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)a0 callback:(id /* block */)a1;

@end
