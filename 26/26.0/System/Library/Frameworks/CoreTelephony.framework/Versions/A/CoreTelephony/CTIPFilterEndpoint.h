@class NSString, NSNumber;

@interface CTIPFilterEndpoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *addr;
@property (retain, nonatomic) NSNumber *maskLen;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSNumber *portRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
