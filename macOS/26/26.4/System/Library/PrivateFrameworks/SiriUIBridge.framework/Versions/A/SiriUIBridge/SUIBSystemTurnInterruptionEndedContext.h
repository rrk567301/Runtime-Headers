@class NSUUID;

@interface SUIBSystemTurnInterruptionEndedContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *userTurnID;
@property (readonly, nonatomic) unsigned long long mitigationResult;

- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)mitigationResultToString:(unsigned long long)a0;

@end
