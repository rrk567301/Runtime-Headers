@interface SKAClientDefinitions : NSObject

+ (id)profileForStatusTypeIdentifier:(id)a0;
+ (id)definitionForClient:(id)a0;
+ (id)definitionForConnection:(id)a0;
+ (BOOL)isConnectionEntitledForAllProfiles:(id)a0;
+ (id)profileForConnection:(id)a0 statusTypeIdentifier:(id)a1;
+ (id)profileForConnection:(id)a0 useCaseName:(id)a1;
+ (id)profileForPresenceIdentifier:(id)a0 useCaseName:(id)a1;
+ (BOOL)validateConnection:(id)a0 entitledForPresenceIdentifier:(id)a1 useCaseName:(id)a2 error:(id *)a3;
+ (BOOL)validateConnection:(id)a0 entitledForStatusTypeIdentifier:(id)a1 withPermission:(long long)a2 error:(id *)a3;
+ (BOOL)validateConnection:(id)a0 forService:(id)a1;

- (id)init;

@end
