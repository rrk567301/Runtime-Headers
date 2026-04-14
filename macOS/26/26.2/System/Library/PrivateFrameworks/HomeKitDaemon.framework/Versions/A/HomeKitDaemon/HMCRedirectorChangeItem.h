@class Protocol, NSUUID, MKFObjectDatabaseID, NSSet;

@interface HMCRedirectorChangeItem : HMFObject

@property (readonly) Protocol *modelType;
@property (readonly) NSUUID *modelID;
@property (readonly) MKFObjectDatabaseID *databaseID;
@property (readonly) NSSet *changedProperties;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isObjectType:(id)a0;

@end
