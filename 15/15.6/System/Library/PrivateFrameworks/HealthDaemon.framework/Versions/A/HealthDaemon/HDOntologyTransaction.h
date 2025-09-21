@class HDSimpleGraphDatabase, HDProfile, HDDatabaseTransaction;

@interface HDOntologyTransaction : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *databaseTransaction;
@property (readonly, nonatomic) HDSimpleGraphDatabase *graphDatabase;
@property (readonly, nonatomic) char isWriteTransaction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 databaseTransaction:(id)a1 graphDatabase:(id)a2 isWriteTransaction:(char)a3;

@end
