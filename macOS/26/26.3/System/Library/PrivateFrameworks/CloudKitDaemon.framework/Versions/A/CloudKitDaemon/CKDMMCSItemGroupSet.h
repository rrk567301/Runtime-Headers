@class NSError, NSMutableSet, CKDMMCSItemGroup;

@interface CKDMMCSItemGroupSet : NSObject {
    CKDMMCSItemGroup *_lastGroup;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSMutableSet *itemsGroups;

+ (unsigned long long)hashOfItem:(id)a0;
+ (BOOL)item:(id)a0 matchesItem:(id)a1;

- (id)initWithItems:(id)a0;
- (void)addItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)allItemGroups;
- (id)description;
- (id)init;
- (void)setCloneContext:(id)a0;
- (void).cxx_destruct;

@end
