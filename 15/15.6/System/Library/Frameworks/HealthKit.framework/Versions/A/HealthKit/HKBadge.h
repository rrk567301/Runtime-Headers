@class NSString, NSNumber;
@protocol NSObject;

@interface HKBadge : NSObject <NSCopying, NSSecureCoding> {
    long long _count;
}

@property (class, readonly, copy, nonatomic) HKBadge *zeroBadge;
@property (class, readonly, copy, nonatomic) HKBadge *indicatorBadge;
@property (class, readonly, copy, nonatomic) HKBadge *errorBadge;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *keyValueRepresentation;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) id<NSObject> value;
@property (readonly, nonatomic, getter=isErrorBadge) char errorBadge;
@property (readonly, nonatomic, getter=isIndicatorBadge) char indicatorBadge;
@property (readonly, nonatomic, getter=isNumberBadge) char numberBadge;
@property (readonly, nonatomic, getter=isZeroBadge) char zeroBadge;

+ (id)badgeFromKeyValueRepresentation:(id)a0;
+ (id)numberBadgeWithCount:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 count:(long long)a1;
- (id)badgeByAggregatingWithBadge:(id)a0;
- (id)badgeByIncrementingByCount:(long long)a0;

@end
