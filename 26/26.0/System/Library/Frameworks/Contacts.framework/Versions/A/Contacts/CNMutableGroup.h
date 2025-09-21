@class CNGroup, NSString, NSData, NSDate;

@interface CNMutableGroup : CNGroup

@property (copy) NSString *externalURI;
@property (copy) NSString *externalIdentifier;
@property (copy) NSData *externalRepresentation;
@property (copy) NSString *externalModificationTag;
@property (copy) NSString *externalUUID;
@property (copy) NSString *identifier;
@property int iOSLegacyIdentifier;
@property (copy) NSDate *creationDate;
@property (copy) NSDate *modificationDate;
@property (copy, nonatomic) CNGroup *snapshot;
@property (copy) NSString *name;

- (void)setSnapshot:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (id)identifier;
- (id)freeze;
- (void)setModificationDate:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setName:(id)a0;
- (id)copy;
- (id)externalRepresentation;
- (void)setCreationDate:(id)a0;
- (id)externalModificationTag;
- (id)modificationDate;
- (id)creationDate;
- (id)name;
- (void)setIdentifier:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (id)externalIdentifier;
- (int)iOSLegacyIdentifier;
- (void)setExternalUUID:(id)a0;
- (void)setIOSLegacyIdentifier:(int)a0;
- (id)freezeWithSelfAsSnapshot;
- (void)setExternalURI:(id)a0;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)externalUUID;

@end
