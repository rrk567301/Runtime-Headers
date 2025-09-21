@class NSString;
@protocol PDSRemoteVendor;

@interface PDSRegistrar : NSObject

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) id<PDSRemoteVendor> remoteVendor;

- (id)description;
- (void).cxx_destruct;
- (void)allRegistrationsWithCompletion:(id /* block */)a0;
- (id)usersWithError:(id *)a0;
- (id)_activeRegistrationsFromEntries:(id)a0;
- (id)_registrationsFromEntries:(id)a0;
- (id)_wrappedErrorForFailedRemote:(id)a0;
- (id)_wrappedErrorForGivenError:(id)a0 XPCError:(id)a1;
- (void)activeUsersWithCompletion:(id /* block */)a0;
- (id)activeUsersWithError:(id *)a0;
- (char)addRegistration:(id)a0 toUser:(id)a1 error:(id *)a2;
- (void)allEntriesWithCompletion:(id /* block */)a0;
- (id)allEntriesWithError:(id *)a0;
- (void)allRegistrationsForUser:(id)a0 completion:(id /* block */)a1;
- (id)allRegistrationsForUser:(id)a0 error:(id *)a1;
- (id)allRegistrationsWithError:(id *)a0;
- (char)batchUpdateRegistrations:(id)a0 forUser:(id)a1 error:(id *)a2;
- (void)currentRegistrationsForUser:(id)a0 completion:(id /* block */)a1;
- (id)currentRegistrationsForUser:(id)a0 error:(id *)a1;
- (char)deleteRegistration:(id)a0 fromUser:(id)a1 error:(id *)a2;
- (char)ensureRegistrationPresent:(id)a0 forUser:(id)a1 error:(id *)a2;
- (id)initWithClientID:(id)a0 error:(id *)a1;
- (char)removeAllRegistrationsFromUser:(id)a0 error:(id *)a1;
- (char)removeRegistration:(id)a0 fromUser:(id)a1 error:(id *)a2;
- (void)usersWithCompletion:(id /* block */)a0;

@end
