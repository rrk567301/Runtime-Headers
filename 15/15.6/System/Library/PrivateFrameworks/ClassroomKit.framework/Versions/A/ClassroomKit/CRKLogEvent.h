@class NSString, NSDictionary, NSDate;

@interface CRKLogEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToEvent:(id)a0;
- (id)initWithName:(id)a0 date:(id)a1 userInfo:(id)a2;

@end
