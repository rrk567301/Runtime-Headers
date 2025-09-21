@class NSString, NSData;

@interface WFCoreDataTrackedFilesystemNode : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *bookmark;
@property (retain, nonatomic) NSData *filesList;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isDirectory;
@property (retain, nonatomic) NSData *triggers;

+ (id)fetchRequest;

- (id)descriptor;

@end
