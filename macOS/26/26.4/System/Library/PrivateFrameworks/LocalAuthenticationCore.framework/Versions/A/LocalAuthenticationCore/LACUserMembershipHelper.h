@interface LACUserMembershipHelper : NSObject

@property (class, readonly, nonatomic) LACUserMembershipHelper *sharedInstance;

- (id)uuidForUserID:(unsigned int)a0 error:(id *)a1;

@end
