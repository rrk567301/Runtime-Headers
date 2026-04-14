@class NSUUID, NSString;

@interface COConstituent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *software;
@property (nonatomic) int device;
@property (readonly, nonatomic, getter=isPowerRisk) BOOL powerRisk;
@property (readonly, nonatomic, getter=isThermalRisk) BOOL thermalRisk;
@property (readonly, nonatomic, getter=isWired) BOOL wired;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)supportsBackoff;
- (id)_timeAwareUUID;

@end
