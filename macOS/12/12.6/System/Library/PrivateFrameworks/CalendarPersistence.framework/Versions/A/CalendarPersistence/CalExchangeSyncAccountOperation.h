@class NSString;

@interface CalExchangeSyncAccountOperation : CalExchangeOperation <CalMessageTraceableOpearation> {
    NSString *_messageTracerUID;
}

@property BOOL fetchMailbox;
@property BOOL refreshDelegatePrivileges;

+ (id)findFolderResponseShape;
+ (id)findFolderRestriction;
+ (id)getFolderResponseShape;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (BOOL)_fetchRootFolderIdForPrincipal:(id)a0 binding:(id)a1 error:(id *)a2;
- (BOOL)_fetchDeletedItemsFolderId:(id)a0 mailbox:(id)a1 binding:(id)a2 error:(id *)a3;
- (BOOL)updateCalendarsForPrincipal:(id)a0 withFolders:(id)a1 binding:(id)a2 error:(id *)a3;
- (BOOL)isObject:(id)a0 anInstanceOf:(Class)a1;
- (BOOL)isFirstObjectInArray:(id)a0 anInstanceOf:(Class)a1;
- (BOOL)syncDelegate:(id)a0 binding:(id)a1 error:(id *)a2;
- (BOOL)syncPrincipalFolderHierarchy:(id)a0 binding:(id)a1 error:(id *)a2;
- (void)refreshUserNameForPrincipal:(id)a0 binding:(id)a1;
- (BOOL)syncPrincipal:(id)a0 binding:(id)a1 error:(id *)a2;

@end
