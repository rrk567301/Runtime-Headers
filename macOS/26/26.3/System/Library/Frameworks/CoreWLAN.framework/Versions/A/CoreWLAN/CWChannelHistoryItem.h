@class NSDate;

@interface CWChannelHistoryItem : NSObject <NSCopying>

@property long long channel;
@property (copy) NSDate *timestamp;

+ (BOOL)supportsSecureCoding;

- (BOOL)conformsToProtocol:(id)a0;
- (id)externalForm;
- (id)description;
- (id)initWithInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToChannelHistoryItem:(id)a0;

@end
