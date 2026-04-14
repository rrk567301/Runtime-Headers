@class NSString, NSDate;

@interface SKPresenceValidationToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *serverTime;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSString *channelIdentifierToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelIdentifierToken:(id)a0 serverTime:(id)a1;
- (id)initWithChannelIdentifierToken:(id)a0 serverTime:(id)a1 version:(long long)a2;
- (BOOL)isEqualToPresenceValidationToken:(id)a0;

@end
