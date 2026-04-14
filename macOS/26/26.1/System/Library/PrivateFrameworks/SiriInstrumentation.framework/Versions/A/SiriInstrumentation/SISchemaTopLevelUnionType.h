@class SIComponentIdentifier, NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (class, readonly, nonatomic) int joinability;

@property (readonly, nonatomic) int clockIsolationLevel;
@property (readonly, nonatomic) SIComponentIdentifier *componentIdentifier;
@property (readonly, nonatomic) int componentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTypeId;
- (BOOL)isProvisional;
- (id)qualifiedMessageName;
- (id)getVersion;
- (int)getAnyEventType;
- (id)getComponentId;
- (int)getComponentName;
- (id)getRequestLinkInfo;
- (id)wrapAsAnyEvent;

@end
