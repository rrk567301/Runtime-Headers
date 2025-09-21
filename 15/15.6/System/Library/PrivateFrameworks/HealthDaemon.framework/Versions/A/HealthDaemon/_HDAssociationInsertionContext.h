@class NSUUID, HDProfile, HDDatabaseTransaction;

@interface _HDAssociationInsertionContext : NSObject

@property (readonly, copy, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) char enforceSameSource;
@property (readonly, nonatomic) char permitPendingAssociations;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *transaction;

- (void).cxx_destruct;
- (id)initWithParentUUID:(id)a0 enforceSameSource:(char)a1 permitPendingAssociations:(char)a2 profile:(id)a3 transaction:(id)a4;

@end
