@class NSString, IDSURI, NSDate;

@interface IDSFirewallEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *mergeID;
@property (nonatomic) char isDonated;
@property (readonly, nonatomic) IDSURI *uri;
@property (readonly, nonatomic) NSDate *lastSeen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0;
- (id)initWithURI:(id)a0 andLastSeenDate:(id)a1;

@end
