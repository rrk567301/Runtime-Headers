@class NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getVersion;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)wrapAsAnyEvent;
- (id)qualifiedMessageName;

@end
