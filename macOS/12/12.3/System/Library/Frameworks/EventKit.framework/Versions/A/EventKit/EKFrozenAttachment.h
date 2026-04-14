@class NSString, NSDictionary, NSURL, NSNumber, NSManagedObjectID;

@interface EKFrozenAttachment : EKFrozenObject <EKProtocolAttachment>

@property (readonly, retain) NSString *contentType;
@property (readonly, retain) NSString *contentTypeFromServer;
@property (readonly, retain) NSString *attachmentIDOnServer;
@property (readonly, retain) NSURL *urlOnDisk;
@property (readonly, retain) NSString *filenameSuggestedByServer;
@property (readonly, retain) NSURL *urlOnServer;
@property (readonly, retain) NSNumber *isAutoArchivedNumber;
@property (readonly, retain) NSString *uuid;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;

@end
