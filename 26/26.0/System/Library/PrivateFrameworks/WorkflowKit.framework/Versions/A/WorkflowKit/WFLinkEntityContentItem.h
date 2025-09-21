@class LNDisplayRepresentation, NSString, LNEntity, LNQueryMetadata, LNEntityMetadata;

@interface WFLinkEntityContentItem : WFContentItem

@property (class, readonly, nonatomic) LNEntityMetadata *entityMetadata;
@property (class, readonly, nonatomic) LNQueryMetadata *queryMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;
@property (class, readonly, nonatomic) NSString *displayedAppBundleIdentifier;

@property (readonly, nonatomic) LNEntity *entity;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

+ (BOOL)isNotes;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)allProperties;
+ (id)coercions;
+ (id)contactCoercionHandler;
+ (BOOL)hasLibrary;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)localizedPluralFilterDescriptionWithContext:(id)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)propertyBuildersForFilteringUsingQuery:(id)a0;
+ (BOOL)isContactEntity;
+ (id)_localizedTypeDescriptionWithContext:(id)a0 pluralizationNumber:(long long)a1;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)a0 objectClasses:(id)a1 operators:(id)a2;
+ (id)appUsageResultCoercionHandler;
+ (id)calendarEventCoercionHandler;
+ (BOOL)hasInMemoryFindAction;
+ (BOOL)isAppUsageResultEntity;
+ (BOOL)isCalendarEventEntity;
+ (BOOL)isFinderNodeEntity;
+ (BOOL)isMailMessageEntity;
+ (BOOL)isNoteEntity;
+ (BOOL)isNoteFolderEntityIdentifier:(id)a0;
+ (BOOL)isPhotosAssetEntity;
+ (BOOL)isRecordingEntity;
+ (BOOL)isReminderEntity;
+ (BOOL)isWorkflowEntity;
+ (id)mailMessageCoercionHandler;
+ (id)photosAssetCoercionHandler;
+ (id)reminderCoercionHandler;
+ (id)workflowCoercionHandler;

- (id)debugDescription;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCopying;
- (void)copyStateToItem:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)generateStructuredDataRepresentationWithTypeIdentifier:(long long)a0 completionHandler:(id /* block */)a1;

@end
