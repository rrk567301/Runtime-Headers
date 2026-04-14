@class NSUUID, HMMediaGroupSource, NSArray;

@interface HMCurrentMediaGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *currentAccessoryUniqueIdentifier;
@property (readonly) unsigned long long mediaGroupType;
@property (readonly) HMMediaGroupSource *source;
@property (readonly, copy) NSArray *participants;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentAccessoryUniqueIdentifier:(id)a0 mediaGroupType:(unsigned long long)a1 source:(id)a2 participants:(id)a3;

@end
