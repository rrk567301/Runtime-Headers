@class NSString, NSNumber;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int reason;
@property (nonatomic) int clss;
@property (nonatomic) char enabled;
@property (retain, nonatomic) NSString *saveNumber;
@property (retain, nonatomic) NSNumber *noReplyTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
