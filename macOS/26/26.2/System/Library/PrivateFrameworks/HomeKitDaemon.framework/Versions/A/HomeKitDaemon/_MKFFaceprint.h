@class NSUUID, NSData, NSDate, MKFFaceprintDatabaseID, NSString, Protocol, _MKFHome, _MKFUser;
@protocol MKFHome, MKFUser;

@interface _MKFFaceprint : _MKFModel <MKFFaceprint, MKFFaceprintPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSUUID *faceCropUUID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSUUID *modelUUID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFUser *user;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSUUID *faceCropUUID;
@property (copy, nonatomic) NSUUID *modelUUID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFFaceprintDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfFaceprint;
- (id)createHMFaceprint;
- (void)updateWithHMFaceprint:(id)a0;

@end
