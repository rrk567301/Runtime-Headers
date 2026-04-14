@class NSString, NSDictionary, NSDate;

@interface CRKLogEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *userInfo;

- (BOOL)isEqualToEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 date:(id)a1 userInfo:(id)a2;

@end
