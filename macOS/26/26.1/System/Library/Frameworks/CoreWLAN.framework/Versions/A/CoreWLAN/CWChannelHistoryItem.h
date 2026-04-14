@class NSDate;

@interface CWChannelHistoryItem : NSObject <NSCopying>

@property long long channel;
@property (copy) NSDate *timestamp;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)externalForm;
- (BOOL)isEqualToChannelHistoryItem:(id)a0;

@end
