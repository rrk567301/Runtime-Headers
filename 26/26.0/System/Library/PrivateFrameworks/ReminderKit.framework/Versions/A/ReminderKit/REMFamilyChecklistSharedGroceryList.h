@class NSSet, NSItemProvider, NSURL, REMObjectID;

@interface REMFamilyChecklistSharedGroceryList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) NSSet *participants;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSItemProvider *itemProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithListID:(id)a0 participants:(id)a1;

@end
