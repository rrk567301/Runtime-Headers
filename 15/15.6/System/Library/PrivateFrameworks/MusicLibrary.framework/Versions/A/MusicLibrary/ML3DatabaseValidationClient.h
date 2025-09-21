@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ML3DatabaseValidationClient : NSObject {
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (id)_validatableDatabaseForPath:(id)a0;
- (char)_validateDatabaseForPath:(id)a0 usingLibrary:(id)a1;
- (char)isValidatingDatabaseForPath:(id)a0;
- (char)validateDatabaseAtPath:(id)a0;
- (char)validateDatabaseForConnection:(id)a0;
- (char)validateDatabaseForLibrary:(id)a0;

@end
