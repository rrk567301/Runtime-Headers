@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct { char abbreviatedUnits; long long distanceDetailLevel; char spoken; char dropTimestampAMPM; char rightToLeft; double referenceDate; } options;
@property (readonly, copy, nonatomic) NSDictionary *variableOverrides;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInstructionsDistanceDetailLevel:(long long)a0 variableOverrides:(id)a1;
- (id)initWithOptions:(struct { char x0; long long x1; char x2; char x3; char x4; double x5; })a0 variableOverrides:(id)a1;
- (char)isEqualToServerFormattedStringParameters:(id)a0;

@end
