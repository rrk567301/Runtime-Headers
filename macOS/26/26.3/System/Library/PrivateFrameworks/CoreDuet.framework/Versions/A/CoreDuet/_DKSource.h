@class NSString, NSNumber;

@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *syncDeviceID;
@property (retain) NSString *deviceID;
@property (retain) NSNumber *userID;
@property (retain) NSString *intentID;
@property (readonly) NSString *sourceID;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *itemID;
@property (readonly) NSString *groupID;

+ (id)fromPBCodable:(id)a0;
+ (id)entityName;
+ (id)sourceForSearchableItem:(id)a0 bundleID:(id)a1;
+ (id)spotlightSourceID;
+ (id)sourceForInteraction:(id)a0 bundleID:(id)a1;
+ (id)intentsSourceID;
+ (id)defaultSourceID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)toPBCodable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 itemIdentifier:(id)a2 groupIdentifier:(id)a3 deviceIdentifier:(id)a4 userIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 itemIdentifier:(id)a2 groupIdentifier:(id)a3 deviceIdentifier:(id)a4 userIdentifier:(id)a5 intentIdentifier:(id)a6;

@end
