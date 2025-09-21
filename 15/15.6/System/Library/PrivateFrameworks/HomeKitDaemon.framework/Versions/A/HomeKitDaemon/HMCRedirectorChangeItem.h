@class Protocol, NSUUID, MKFObjectDatabaseID, NSSet;

@interface HMCRedirectorChangeItem : HMFObject

@property (readonly) Protocol *modelType;
@property (readonly) NSUUID *modelID;
@property (readonly) MKFObjectDatabaseID *databaseID;
@property (readonly) NSSet *changedProperties;

- (id)description;
- (void).cxx_destruct;
- (char)isObjectType:(id)a0;

@end
