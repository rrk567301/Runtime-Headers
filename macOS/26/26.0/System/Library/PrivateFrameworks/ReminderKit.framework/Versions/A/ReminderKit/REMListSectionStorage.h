@class NSString, REMObjectID;

@interface REMListSectionStorage : REMBaseSectionStorage

@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) NSString *canonicalName;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (id)cdKeyToStorageKeyMap;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 listID:(id)a2 displayName:(id)a3;

@end
