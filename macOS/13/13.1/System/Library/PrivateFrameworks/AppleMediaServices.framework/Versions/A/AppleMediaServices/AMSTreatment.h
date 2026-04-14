@class NSString, NSDate;

@interface AMSTreatment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *endDate;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSDate *startDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEndDate:(id)a0 identifier:(id)a1 startDate:(id)a2;

@end
