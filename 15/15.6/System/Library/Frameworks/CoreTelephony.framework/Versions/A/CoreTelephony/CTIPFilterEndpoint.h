@class NSString, NSNumber;

@interface CTIPFilterEndpoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *addr;
@property (retain, nonatomic) NSNumber *maskLen;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSNumber *portRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
