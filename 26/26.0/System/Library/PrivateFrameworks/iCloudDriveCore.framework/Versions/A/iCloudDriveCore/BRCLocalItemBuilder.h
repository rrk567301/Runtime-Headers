@class BRCAccountSession;

@interface BRCLocalItemBuilder : NSObject {
    BRCAccountSession *_session;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)newLocalItemFromPQLResultSet:(id)a0 error:(id *)a1;
- (id)newZoneRootWithItemID:(id)a0;

@end
