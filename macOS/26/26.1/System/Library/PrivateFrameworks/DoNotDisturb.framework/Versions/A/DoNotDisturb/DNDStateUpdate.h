@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) DNDState *previousState;
@property (readonly, copy) DNDState *state;
@property (readonly) unsigned long long reason;
@property (readonly) long long source;
@property (readonly) long long options;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPreviousState:(id)a0 state:(id)a1 reason:(unsigned long long)a2 source:(long long)a3 options:(long long)a4;

@end
