@class NSString, DNDContactHandle;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL notifyAnyway;
@property (readonly) unsigned long long behavior;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long urgency;
@property (readonly, copy) DNDContactHandle *sender;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *filterCriteria;
@property (readonly) BOOL shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)_initWithDetails:(id)a0;
- (id)_initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 urgency:(unsigned long long)a3 sender:(id)a4 threadIdentifier:(id)a5 filterCriteria:(id)a6 notifyAnyway:(BOOL)a7 behavior:(unsigned long long)a8;
- (BOOL)shouldAlwaysInterrupt;

@end
