@class NSString, NSDateComponents, NSUUID;

@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *startComponents;
@property (readonly, copy, nonatomic) NSDateComponents *endComponents;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) unsigned long long repeatInterval;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartComponents:(id)a0 endComponents:(id)a1 calendarIdentifier:(id)a2 repeatInterval:(unsigned long long)a3 identifier:(id)a4;

@end
