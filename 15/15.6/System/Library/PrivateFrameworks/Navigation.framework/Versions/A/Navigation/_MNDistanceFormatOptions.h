@class NSUnitLength, NSLocale;

@interface _MNDistanceFormatOptions : NSObject

@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) char metric;
@property (nonatomic) char yards;
@property (nonatomic) char abbreviateUnits;
@property (nonatomic) char spoken;
@property (nonatomic) long long rounding;
@property (retain, nonatomic) NSUnitLength *unitLength;
@property (retain, nonatomic) NSLocale *locale;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
