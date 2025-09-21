@class NSUUID, NSDate;

@interface HDIntermediateSyncAssociation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char deleted;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSUUID *destinationSubObjectUUID;
@property (readonly, copy, nonatomic) NSUUID *associationUUID;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssociationUUID:(id)a0 type:(unsigned long long)a1 creationDate:(id)a2 deleted:(char)a3 destinationSubObjectUUID:(id)a4;

@end
