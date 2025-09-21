@class NSString, NSSet, NSObject;
@protocol OS_xpc_object;

@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration>

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *protectionClass;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *personaID;
@property (readonly, nonatomic) NSSet *allowedBundleIDs;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) unsigned int egid;
@property (readonly, nonatomic) char internal;
@property (readonly, nonatomic) char searchInternal;
@property (readonly, nonatomic) char isExtension;
@property (readonly, nonatomic) char privateIndexNonSandboxAllowed;
@property (readonly, nonatomic) char managedIndexNonSandboxAllowed;
@property (readonly, nonatomic) char isPrivate;
@property (readonly, nonatomic) char isManaged;
@property (readonly, nonatomic) char allowMail;
@property (readonly, nonatomic) char quotaDisabled;
@property (readonly, nonatomic) char allowPhotosLibraryDeletion;
@property (readonly, nonatomic) char allowOpenJournalFile;
@property (readonly, nonatomic) int entitledAttributes;
@property (readonly, nonatomic) char allowNotifications;
@property (readonly, nonatomic) char allowMessagesContent;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 isManaged:(char)a1;
- (id)initWithConnection:(id)a0 isPrivate:(char)a1;
- (id)initWithConnection:(id)a0 isPrivate:(char)a1 isManaged:(char)a2;

@end
