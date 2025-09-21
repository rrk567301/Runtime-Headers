@class NSString, NSDate;

@interface TUSmartHoldingEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSDate *date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 text:(id)a1 date:(id)a2;
- (BOOL)isEqualToSession:(id)a0;

@end
