@class NSSet, NSItemProvider, NSURL, REMObjectID;

@interface REMFamilyChecklistSharedGroceryList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) NSSet *participants;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSItemProvider *itemProvider;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithListID:(id)a0 participants:(id)a1;

@end
