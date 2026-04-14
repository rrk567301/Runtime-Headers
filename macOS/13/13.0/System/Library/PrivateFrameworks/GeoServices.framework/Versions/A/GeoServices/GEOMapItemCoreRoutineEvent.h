@class GEOAddressObject, NSString, NSDictionary, GEOMapItemClientAttributes, NSDate, GEOPlace;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    struct { double latitude; double longitude; } _coordinate;
    GEOAddressObject *_addressObject;
}

- (id)name;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (struct { double x0; double x1; })coordinate;
- (id)eventName;
- (id)geoAddress;
- (id)addressDictionary;
- (id)addressObject;
- (id)weatherDisplayName;
- (id)eventDate;
- (BOOL)isEventAllDay;
- (id)_clientAttributes;
- (id)_place;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;

@end
