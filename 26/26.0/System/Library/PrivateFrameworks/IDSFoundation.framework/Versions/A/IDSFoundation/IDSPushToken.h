@class NSString, NSData;

@interface IDSPushToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceLoggingHint;
@property (readonly, nonatomic) NSData *rawToken;

+ (id)pushTokenWithData:(id)a0;
+ (id)pushTokenWithData:(id)a0 withServiceLoggingHint:(id)a1;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 withServiceLoggingHint:(id)a1;
- (BOOL)isEqualToPushToken:(id)a0;

@end
