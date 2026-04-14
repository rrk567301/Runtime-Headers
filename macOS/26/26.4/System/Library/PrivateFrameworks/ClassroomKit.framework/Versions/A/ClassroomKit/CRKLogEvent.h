@class NSString, NSDictionary, NSDate;

@interface CRKLogEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isEqualToEvent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 date:(id)a1 userInfo:(id)a2;

@end
