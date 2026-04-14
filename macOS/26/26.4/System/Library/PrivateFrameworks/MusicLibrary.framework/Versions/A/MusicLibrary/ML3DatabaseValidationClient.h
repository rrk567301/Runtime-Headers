@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ML3DatabaseValidationClient : NSObject {
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (BOOL)validateDatabaseForLibrary:(id)a0;
- (id)_validatableDatabaseForPath:(id)a0;
- (BOOL)isValidatingDatabaseForPath:(id)a0;
- (BOOL)validateDatabaseForConnection:(id)a0;
- (BOOL)_validateDatabaseForPath:(id)a0 usingLibrary:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)validateDatabaseAtPath:(id)a0;

@end
