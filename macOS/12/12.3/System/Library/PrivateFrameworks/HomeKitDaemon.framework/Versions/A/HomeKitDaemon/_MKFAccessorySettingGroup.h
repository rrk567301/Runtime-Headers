@class NSUUID, NSString, _MKFAppleMediaAccessory, NSPredicate, NSSet, NSArray, MKFAccessorySettingGroupDatabaseID, NSDate, Protocol;
@protocol MKFHome, MKFAccessorySettingGroup, MKFAppleMediaAccessory;

@interface _MKFAccessorySettingGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingGroup, MKFAccessorySettingGroupPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (retain, nonatomic) NSSet *children_;
@property (retain, nonatomic) _MKFAccessorySettingGroup *parent;
@property (retain, nonatomic) NSSet *settings_;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) id<MKFAppleMediaAccessory> accessory;
@property (readonly, retain, nonatomic) NSArray *children;
@property (retain, nonatomic) id<MKFAccessorySettingGroup> parent;
@property (readonly, retain, nonatomic) NSArray *settings;
@property (readonly, copy, nonatomic) MKFAccessorySettingGroupDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

@end
