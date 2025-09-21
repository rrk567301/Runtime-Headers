@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interval;
@property (readonly, nonatomic) long long frequency;
@property (readonly, nonatomic) unsigned long long weeklyRecurrenceDays;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterval:(unsigned long long)a0 frequency:(long long)a1;
- (id)initWithInterval:(unsigned long long)a0 frequency:(long long)a1 weeklyRecurrenceDays:(unsigned long long)a2;

@end
