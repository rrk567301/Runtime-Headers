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

- (BOOL)isEventAllDay;
- (id)_place;
- (id)_clientAttributes;
- (id)weatherDisplayName;
- (id)addressObject;
- (id)addressDictionary;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResolvablePartialInformation;
- (id)geoAddress;
- (id)description;
- (id)eventDate;
- (id)eventName;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;

@end
