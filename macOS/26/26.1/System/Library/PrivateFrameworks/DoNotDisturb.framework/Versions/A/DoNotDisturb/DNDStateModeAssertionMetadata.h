@class NSString, NSDateInterval, NSDate;

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSDate *userVisibleEndDate;
@property (readonly, copy) NSString *modeIdentifier;
@property (readonly) unsigned long long lifetimeType;
@property (readonly, copy) NSDateInterval *activeDateInterval;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientIdentifier:(id)a0 modeIdentifier:(id)a1 lifetimeType:(unsigned long long)a2 activeDateInterval:(id)a3 userVisibleEndDate:(id)a4;

@end
