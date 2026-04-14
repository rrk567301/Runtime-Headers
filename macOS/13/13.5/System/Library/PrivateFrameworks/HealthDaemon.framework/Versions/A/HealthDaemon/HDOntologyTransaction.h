@class HDSimpleGraphDatabase, HDProfile, HDDatabaseTransaction;

@interface HDOntologyTransaction : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *databaseTransaction;
@property (readonly, nonatomic) HDSimpleGraphDatabase *graphDatabase;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseTransaction:(id)a0 graphDatabase:(id)a1;

@end
