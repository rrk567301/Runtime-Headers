@class NSManagedObjectContext, CNCDRecordSaveCache, CNSaveRequest, CNCDPersistenceContext;
@protocol CNContactPosterDataStore;

@interface CNCDSaveContext : NSObject

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) CNCDPersistenceContext *persistenceContext;
@property (readonly) NSManagedObjectContext *context;
@property (readonly) id<CNContactPosterDataStore> posterDataStore;
@property (readonly) CNCDRecordSaveCache *contactCache;
@property (readonly) CNCDRecordSaveCache *groupCache;
@property (readonly) CNCDRecordSaveCache *containerCache;

- (void).cxx_destruct;
- (id)initWithSaveRequest:(id)a0 persistenceContext:(id)a1 context:(id)a2 posterDataStore:(id)a3;

@end
