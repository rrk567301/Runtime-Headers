@class NSError, NSMutableSet, CKDMMCSItemGroup;

@interface CKDMMCSItemGroupSet : NSObject {
    CKDMMCSItemGroup *_lastGroup;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSMutableSet *itemsGroups;

+ (BOOL)item:(id)a0 matchesItem:(id)a1;
+ (unsigned long long)hashOfItem:(id)a0;

- (id)initWithItems:(id)a0;
- (void)addItem:(id)a0;
- (void)setCloneContext:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (id)allItemGroups;

@end
