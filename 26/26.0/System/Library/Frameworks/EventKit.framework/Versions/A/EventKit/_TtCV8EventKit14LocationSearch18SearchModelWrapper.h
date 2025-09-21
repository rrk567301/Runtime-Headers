@interface _TtCV8EventKit14LocationSearch18SearchModelWrapper : NSObject <EKLocationSearchModelDelegate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ eventID;
    void /* unknown type, empty encoding */ dateRange;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ shouldIssueAvailabilityRequest;
    void /* unknown type, empty encoding */ conferenceRoomNamesToExclude;
    void /* unknown type, empty encoding */ searchModel;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (id)dateRangeForSearchModel:(id)a0;
- (id)eventIDForSearchModel:(id)a0;
- (void)locationSearchModel:(id)a0 selectedLocation:(id)a1 withError:(id)a2;
- (void)locationSearchModel:(id)a0 updatedSearchTypes:(unsigned long long)a1;
- (BOOL)shouldIncludeConferenceRoom:(id)a0;
- (BOOL)shouldIssueAvailabilityRequestForSearchModel:(id)a0;
- (id)sourceForSearchModel:(id)a0;

@end
