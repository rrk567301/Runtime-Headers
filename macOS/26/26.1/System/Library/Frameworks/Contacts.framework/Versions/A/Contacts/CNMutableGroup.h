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

- (id)freeze;
- (void)setCreationDate:(id)a0;
- (id)copy;
- (id)externalModificationTag;
- (id)creationDate;
- (id)externalIdentifier;
- (void)setSnapshot:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)modificationDate;
- (id)externalRepresentation;
- (void)setName:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)identifier;
- (void)setModificationDate:(id)a0;
- (id)name;
- (void)setExternalRepresentation:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (int)iOSLegacyIdentifier;
- (void)setExternalUUID:(id)a0;
- (void)setIOSLegacyIdentifier:(int)a0;
- (id)freezeWithSelfAsSnapshot;
- (void)setExternalURI:(id)a0;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)externalUUID;

@end
