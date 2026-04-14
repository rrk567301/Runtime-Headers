@class NSArray;

@interface ISSQLDatabase : NSObject {
    void /* unknown type, empty encoding */ provider;
}

@property (nonatomic, readonly) NSArray *virtualTables;

- (id)init;
- (void).cxx_destruct;
- (id)biomeDBWithPrivileges:(id)a0 isColumnAccesLoggingEnabled:(BOOL)a1;
- (id)selfDB;

@end
