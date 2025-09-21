@class Protocol, NSUUID, _MKFRoom, MKFRoomPresenceDatabaseID, NSDate, NSNumber, NSString;
@protocol MKFRoom;

@interface _MKFRoomPresence : _MKFModel <MKFRoomPresence, MKFRoomPresencePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSDate *stateChangedTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFRoom *room;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSDate *stateChangedTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFRoom> room;
@property (readonly, copy, nonatomic) MKFRoomPresenceDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfRoomPresence;

@end
