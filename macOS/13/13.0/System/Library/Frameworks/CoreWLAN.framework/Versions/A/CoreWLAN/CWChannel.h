@class NSDictionary;

@interface CWChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *info;
@property (readonly) unsigned long long flags;
@property (readonly) unsigned long long channelProperties;
@property (copy) NSDictionary *info;
@property (readonly) long long channelNumber;
@property (readonly) long long channelWidth;
@property (readonly) long long channelBand;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)flags;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (long long)channelNumber;
- (long long)channelWidth;
- (long long)channelBand;
- (BOOL)isEqualToChannel:(id)a0;
- (id)initWithChannel:(id)a0;
- (unsigned long long)channelProperties;

@end
