@class NSUUID, NSData, NSDate, NSPredicate, MKFStatusChannelDatabaseID, NSString, Protocol, _MKFHome, NSNumber;
@protocol MKFHome;

@interface _MKFStatusChannel : _MKFModel <MKFStatusChannel, MKFStatusChannelPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSData *channelMetadata;
@property (copy, nonatomic) NSNumber *channelType;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *creationTimestamp;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSData *channelMetadata;
@property (copy, nonatomic) NSNumber *channelType;
@property (copy, nonatomic) NSDate *creationTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFStatusChannelDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfStatusChannel;

@end
