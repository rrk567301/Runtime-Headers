@class NSUUID, NSDate;

@interface HDIntermediateSyncAssociation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSUUID *destinationSubObjectUUID;
@property (readonly, copy, nonatomic) NSUUID *associationUUID;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssociationUUID:(id)a0 type:(unsigned long long)a1 behavior:(unsigned long long)a2 creationDate:(id)a3 deleted:(BOOL)a4 destinationSubObjectUUID:(id)a5;

@end
