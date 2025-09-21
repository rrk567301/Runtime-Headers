@class NSSet, NSDictionary, PKCatalog;

@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *passes;
@property (readonly, copy, nonatomic) NSDictionary *states;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, copy, nonatomic) NSDictionary *annotationsByPassUniqueID;
@property (readonly, nonatomic) PKCatalog *catalog;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPasses:(id)a0 states:(id)a1 annotations:(id)a2 accounts:(id)a3 catalog:(id)a4;
- (id)initWithPasses:(id)a0 states:(id)a1 annotations:(id)a2 catalog:(id)a3;

@end
