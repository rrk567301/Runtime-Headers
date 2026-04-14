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

- (unsigned long long)flags;
- (BOOL)isEqualToChannel:(id)a0;
- (id)initWithInfo:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)channelWidth;
- (long long)channelNumber;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (long long)channelBand;
- (unsigned long long)channelProperties;
- (id)initWithChannel:(id)a0;

@end
