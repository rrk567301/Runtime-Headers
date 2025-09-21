@class NSDate;

@interface CWChannelHistoryItem : NSObject <NSCopying>

@property long long channel;
@property (copy) NSDate *timestamp;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)externalForm;
- (char)isEqualToChannelHistoryItem:(id)a0;

@end
