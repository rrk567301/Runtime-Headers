@class NSArray, PKSeat;

@interface PKSeatingInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *allSeats;
@property (readonly, nonatomic) PKSeat *firstSeat;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_allAisles;
- (id)_allLevels;
- (id)_allRows;
- (id)_allSectionColors;
- (id)_allSections;
- (id)_displayableAirlineSeatsStringForRow:(id)a0 designations:(id)a1;
- (id)_formatSeatLettersForRow:(id)a0 designations:(id)a1 includeSpaceBetweenRowAndSeats:(BOOL)a2;
- (id)_formatSeatNumbersForRow:(id)a0 designations:(id)a1 formatter:(id)a2 includeSpaceBetweenRowAndSeats:(BOOL)a3;
- (id)_formattedAirlineSeatsStringForRow:(id)a0 designation:(id)a1 includeSpaceBetweenRowAndSeats:(BOOL)a2;
- (BOOL)_isStringAllLetters:(id)a0;
- (BOOL)_isStringAllNumbers:(id)a0 formatter:(id)a1;
- (id)changeMessageFromAirlineSeatingInformation:(id)a0;
- (id)changeMessageFromInformation:(id)a0 isTransit:(BOOL)a1;
- (id)displayableAirlineSeatsString;
- (id)displayableAllAislesString;
- (id)displayableAllLevelsString;
- (id)displayableAllRowsString;
- (id)displayableAllSeatsString;
- (id)displayableAllSectionsColor;
- (id)displayableAllSectionsString;
- (id)firstSeatContainingAttributes:(unsigned long long)a0;
- (id)initFromSemantic:(id)a0;
- (id)initFromSemantics:(id)a0;
- (id)seatsContainingAttributes:(unsigned long long)a0;
- (BOOL)seatsSpanMultipleSections;

@end
