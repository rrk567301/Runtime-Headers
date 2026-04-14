@class NSString, NSData;

@interface WFCoreDataLibrary : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *cloudKitRecordMetadata;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) long long syncHash;

+ (id)fetchRequest;

- (id)descriptor;

@end
