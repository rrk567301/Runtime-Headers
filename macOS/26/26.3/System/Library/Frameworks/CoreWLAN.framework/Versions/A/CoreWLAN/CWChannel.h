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

- (BOOL)isEqualToChannel:(id)a0;
- (long long)channelWidth;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (unsigned long long)flags;
- (id)initWithInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (long long)channelNumber;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)channelBand;
- (unsigned long long)channelProperties;
- (id)initWithChannel:(id)a0;

@end
