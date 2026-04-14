@class NSString, NSEntityDescription, NSPersistentStoreCoordinator;

@interface _MFSeenMessagesStore : NSObject

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSString *persistentStorePath;
@property (retain, nonatomic) NSEntityDescription *accountEntity;
@property (retain, nonatomic) NSEntityDescription *seenMessageEntity;

- (id)_managedObjectModel;
- (id)init;
- (void).cxx_destruct;

@end
