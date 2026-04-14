@class NSError, NSMutableSet, CKDMMCSItemGroup;

@interface CKDMMCSItemGroupSet : NSObject {
    CKDMMCSItemGroup *_lastGroup;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSMutableSet *itemsGroups;

+ (unsigned long long)hashOfItem:(id)a0;
+ (BOOL)item:(id)a0 matchesItem:(id)a1;

- (id)initWithItems:(id)a0;
- (id)CKPropertiesDescription;
- (void)addItem:(id)a0;
- (void)setCloneContext:(id)a0;
- (id)description;
- (id)allItemGroups;
- (void).cxx_destruct;
- (id)init;

@end
