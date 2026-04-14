@class NSString, NSDate;

@interface CUIKFlightEventSuggestion : CUIKEventSuggestion

@property (retain) NSDate *departureDate;
@property (retain) NSString *airlineCode;
@property long long flightNumber;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)flightCode;

@end
