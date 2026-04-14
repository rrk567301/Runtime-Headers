@class NSString, NSDate;

@interface CUIKFlightEventSuggestion : CUIKEventSuggestion

@property (retain) NSDate *departureDate;
@property (retain) NSString *airlineCode;
@property long long flightNumber;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)flightCode;

@end
