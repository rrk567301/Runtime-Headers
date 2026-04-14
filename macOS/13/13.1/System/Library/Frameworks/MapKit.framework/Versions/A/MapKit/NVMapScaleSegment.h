@interface NVMapScaleSegment : NSObject

@property (nonatomic) long long unit;
@property (nonatomic) BOOL unitAbbreviated;
@property (nonatomic) double displayedLength;
@property (nonatomic) double lengthInMeters;

- (id)localizedUnitWithDisplayedNumber:(id)a0;
- (id)_localizedStringForUnabbreviatedUnitWithPluralRule:(long long)a0;

@end
