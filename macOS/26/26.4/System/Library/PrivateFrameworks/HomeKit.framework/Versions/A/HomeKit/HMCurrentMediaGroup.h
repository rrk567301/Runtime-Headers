@class NSUUID, HMMediaGroupSource, NSArray;

@interface HMCurrentMediaGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *currentAccessoryUniqueIdentifier;
@property (readonly) unsigned long long mediaGroupType;
@property (readonly) HMMediaGroupSource *source;
@property (readonly, copy) NSArray *participants;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentAccessoryUniqueIdentifier:(id)a0 mediaGroupType:(unsigned long long)a1 source:(id)a2 participants:(id)a3;

@end
