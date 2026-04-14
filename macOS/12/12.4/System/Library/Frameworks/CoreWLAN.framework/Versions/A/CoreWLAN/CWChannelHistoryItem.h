@class NSDate;

@interface CWChannelHistoryItem : NSObject <NSCopying>

@property long long channel;
@property (copy) NSDate *timestamp;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)externalForm;
- (BOOL)isEqualToChannelHistoryItem:(id)a0;

@end
