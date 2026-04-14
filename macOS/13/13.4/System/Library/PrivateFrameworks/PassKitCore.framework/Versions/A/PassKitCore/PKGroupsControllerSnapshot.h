@class NSSet, NSDictionary, PKCatalog;

@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *passes;
@property (readonly, nonatomic) NSDictionary *annotationsByPassUniqueID;
@property (readonly, nonatomic) PKCatalog *catalog;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPasses:(id)a0 annotationsByPassUniqueID:(id)a1 catalog:(id)a2;

@end
