@class CNContact;

@interface IMCTBlockList : NSObject

+ (id)sharedBlockList;

- (id)init;
- (void).cxx_destruct;
- (void)blockContact:(CNContact *)a0 completion:(void (^)(void))a1;
- (void)unblockContact:(CNContact *)a0 completion:(void (^)(void))a1;

@end
