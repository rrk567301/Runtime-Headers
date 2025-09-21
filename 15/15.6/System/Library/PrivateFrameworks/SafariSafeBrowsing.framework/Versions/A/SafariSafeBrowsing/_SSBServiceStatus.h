@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {
    struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } m_name; int m_pid; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } m_activeTransactions; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__begin_; struct Connection *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__value_; } __end_cap_; } m_connections; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__begin_; struct DatabaseUpdaterStatus *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__value_; } __end_cap_; } m_databaseUpdatersStatuses; } _serviceStatus;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) int processIdentifier;
@property (readonly, copy, nonatomic) NSArray *activeTransactions;
@property (readonly, nonatomic) NSArray *databaseUpdatersStatuses;
@property (readonly, nonatomic) unsigned long long connectionCount;
@property (readonly, nonatomic) unsigned long long databaseUpdaterState;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)a0;
- (id)initWithServiceStatus:(struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x0; int x1; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x2; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *x0; struct Connection *x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *x0; } x2; } x3; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *x0; struct DatabaseUpdaterStatus *x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *x0; } x2; } x4; })a0;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)a0;

@end
