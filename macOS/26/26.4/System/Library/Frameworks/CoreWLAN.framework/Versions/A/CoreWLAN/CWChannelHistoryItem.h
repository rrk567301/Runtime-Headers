@class NSDate;

@interface CWChannelHistoryItem : NSObject <NSCopying>

@property long long channel;
@property (copy) NSDate *timestamp;

+ (BOOL)supportsSecureCoding;

- (id)externalForm;
- (id)initWithInfo:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqualToChannelHistoryItem:(id)a0;

@end
