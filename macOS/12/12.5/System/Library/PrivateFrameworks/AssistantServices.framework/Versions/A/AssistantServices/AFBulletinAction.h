@class NSString, NSMutableSet, BBAction;

@interface AFBulletinAction : NSObject

@property (retain, nonatomic) NSMutableSet *titleVariants;
@property (readonly, nonatomic) BBAction *bbAction;
@property (readonly, copy, nonatomic) NSString *bbActionID;

- (void).cxx_destruct;
- (id)initWithBulletinAction:(id)a0;
- (void)addTitleVariant:(id)a0;
- (id)getTitleVariants;

@end
