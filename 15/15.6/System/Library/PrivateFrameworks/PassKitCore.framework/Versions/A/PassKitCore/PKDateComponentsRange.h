@class NSDateComponents;

@interface PKDateComponentsRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, copy, nonatomic) NSDateComponents *endDateComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateInterval;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (char)isEqualToDateComponentsRange:(id)a0;

@end
