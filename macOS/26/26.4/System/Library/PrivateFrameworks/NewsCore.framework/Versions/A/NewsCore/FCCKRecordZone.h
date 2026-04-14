@class CKRecordZoneID, FCCKPrivateDatabase;
@protocol FCCKRecordZoneDelegate;

@interface FCCKRecordZone : NSObject {
    BOOL _zoneReady;
    CKRecordZoneID *_recordZoneID;
    FCCKPrivateDatabase *_database;
    id<FCCKRecordZoneDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)description;

@end
