@class NSDate, NSString, NSArray, WFActionParameterSummary, WFActionDescriptionDefinition, NSDictionary, _NSLocalizedStringResource, ICApp;

@interface ICAction : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) ICApp *app;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSArray *inputMapping;
@property (readonly, nonatomic) NSArray *outputMapping;
@property (readonly, nonatomic) WFActionParameterSummary *parameterSummaryDefinition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) _NSLocalizedStringResource *keywords;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic, getter=isDiscontinued) char discontinued;
@property (readonly, nonatomic, getter=isDiscoverable) char discoverable;
@property (readonly, nonatomic) WFActionDescriptionDefinition *descriptionDefinition;
@property (readonly, nonatomic) char inputRequired;
@property (readonly, nonatomic) NSArray *inputContentClasses;
@property (readonly, nonatomic) NSArray *outputContentClasses;
@property (readonly, nonatomic) char inputsMultipleItems;
@property (readonly, nonatomic) char outputsMultipleItems;
@property (readonly, nonatomic) char skipItemClassesSupportingInput;
@property (readonly, nonatomic) char neverSuggested;
@property (readonly, nonatomic) char createsWFAction;
@property (readonly, nonatomic) NSString *wfActionClassName;
@property (readonly, nonatomic) NSArray *requiredResourceNames;
@property (readonly, nonatomic) NSString *inputParameterSourceKey;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)initWithDefinition:(id)a0 app:(id)a1;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (id)localizedSubcategoryWithContext:(id)a0;
- (void)processInput:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

@end
