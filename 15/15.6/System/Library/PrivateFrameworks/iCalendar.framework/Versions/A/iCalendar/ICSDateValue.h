@interface ICSDateValue : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long year;
@property (readonly) long long month;
@property (readonly) long long day;

+ (id)dateFromICSString:(id)a0;
+ (id)dateFromICSUTF8String:(const char *)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)components;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (int)dateType;
- (id)icsString;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;

@end
