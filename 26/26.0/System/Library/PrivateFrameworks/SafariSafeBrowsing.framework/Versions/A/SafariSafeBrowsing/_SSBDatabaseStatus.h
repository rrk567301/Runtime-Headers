@interface _SSBDatabaseStatus : NSObject {
    struct DatabaseStatus { struct vector<SafeBrowsing::DatabaseStatus::Database, std::allocator<SafeBrowsing::DatabaseStatus::Database>> { struct Database *__begin_; struct Database *__end_; struct Database *__cap_; } m_databases; } _databaseStatus;
}

@property (readonly, nonatomic) unsigned long long databaseCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)hashCountOfDatabaseAtIndex:(unsigned long long)a0;
- (id)initWithDatabaseStatus:(struct DatabaseStatus { struct vector<SafeBrowsing::DatabaseStatus::Database, std::allocator<SafeBrowsing::DatabaseStatus::Database>> { struct Database *x0; struct Database *x1; struct Database *x2; } x0; })a0;
- (id)lastUpdateTimeOfDatabaseAtIndex:(unsigned long long)a0;
- (id)nameOfDatabaseAtIndex:(unsigned long long)a0;
- (id)nextPollingTimeOfDatabaseAtIndex:(unsigned long long)a0;
- (unsigned long long)sizeOfDatabaseAtIndex:(unsigned long long)a0;

@end
