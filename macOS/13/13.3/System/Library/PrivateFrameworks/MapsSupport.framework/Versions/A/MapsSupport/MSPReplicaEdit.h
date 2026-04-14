@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifierOfAffectedRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
