@class NSDictionary, NSSet, NSString;
@protocol WFPropertyListObject;

@interface WFTableTemplateContentItemFilterParameter : WFParameter {
    void /* unknown type, empty encoding */ isFilterable;
    void /* unknown type, empty encoding */ contentItemClass;
    void /* function */ linkValueTypes;
}

@property (nonatomic, copy) NSDictionary *linkValueTypes;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly) id<WFPropertyListObject> defaultSerializedRepresentation;
@property (nonatomic, readonly) NSString *importQuestionBehavior;
@property (nonatomic, readonly) BOOL allowsMultipleValues;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (Class)singleStateClass;

@end
