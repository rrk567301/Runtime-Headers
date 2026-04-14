@class NSOrderedSet, NSString, WFAction, NSNumber;
@protocol WFVariableProvider;

@interface WFActionOutputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (nonatomic) BOOL actionAccessedSinceLastUpdate;
@property (retain, nonatomic) NSNumber *cachedAvailablility;
@property (retain, nonatomic) NSOrderedSet *cachedContentClasses;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *outputUUID;
@property (readonly, weak, nonatomic) WFAction *action;

- (BOOL)isAvailable;
- (id)icon;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultName;
- (void).cxx_destruct;
- (id)UUID;
- (BOOL)isRenamed;
- (id)variableBySettingAggrandizements:(id)a0;
- (id)variableProvider;
- (id)initWithOutputUUID:(id)a0 outputName:(id)a1 variableProvider:(id)a2 aggrandizements:(id)a3;
- (void)actionIconDidChange;
- (void)actionOutputNameDidChange;
- (id)calculatedAvailability;
- (id)initWithAction:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleContentClasses;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)variableProviderDidInvalidateOutputDetails:(id)a0;

@end
