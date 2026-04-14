@class NSString, NSDate;

@interface TUSmartHoldingEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double confidenceScore;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 text:(id)a1 date:(id)a2;
- (id)initWithType:(long long)a0 text:(id)a1 date:(id)a2 confidenceScore:(double)a3;
- (BOOL)isEqualToSession:(id)a0;

@end
