@class NSOrderedSet;

@interface SVXAlarmAndTimerFiringContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSOrderedSet *orderedFiringAlarms;
@property (readonly, copy, nonatomic) NSOrderedSet *orderedFiringTimers;
@property (readonly, nonatomic) BOOL hasOtherRunningTimers;

+ (id)newWithBuilder:(id /* block */)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithOrderedFiringAlarms:(id)a0 orderedFiringTimers:(id)a1 hasOtherRunningTimers:(BOOL)a2;

@end
