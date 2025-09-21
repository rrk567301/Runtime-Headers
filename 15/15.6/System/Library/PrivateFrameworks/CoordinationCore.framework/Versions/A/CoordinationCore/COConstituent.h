@class NSUUID, NSString;

@interface COConstituent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *software;
@property (nonatomic) int device;
@property (readonly, nonatomic, getter=isPowerRisk) char powerRisk;
@property (readonly, nonatomic, getter=isThermalRisk) char thermalRisk;
@property (readonly, nonatomic, getter=isWired) char wired;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0;
- (char)supportsBackoff;
- (id)_timeAwareUUID;

@end
