@class NSThread, ML3DatabaseConnection;

@interface _ML3DatabaseConnectionWrapper : NSObject

@property (retain, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSThread *owningThread;
@property (retain, nonatomic) NSThread *borrowingThread;
@property (nonatomic) unsigned long long useCount;

- (id)debugDescription;
- (id)description;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
