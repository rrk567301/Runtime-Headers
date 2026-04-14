@class NSString, NSSet, NSDate;

@interface PLAssetResourceUploadJobConfiguration : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSSet *uploadJobs;
@property (nonatomic) unsigned short state;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;
+ (void)signalPendingBackgroundUploadWorkItemForLibrary:(id)a0;

@end
