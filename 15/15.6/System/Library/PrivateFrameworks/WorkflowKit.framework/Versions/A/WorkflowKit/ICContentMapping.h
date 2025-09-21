@class WFParameterDefinition, NSString, NSDictionary, NSOrderedSet;

@interface ICContentMapping : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSString *sourceType;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *destinationType;
@property (readonly, nonatomic) NSString *destinationKey;
@property (readonly, nonatomic) NSDictionary *valueMapping;
@property (readonly, nonatomic) char skipURLEncoding;
@property (readonly, nonatomic) WFParameterDefinition *parameterUI;
@property (readonly, nonatomic) id parameterDefault;
@property (readonly, nonatomic) char supportsMultipleItems;
@property (readonly, nonatomic) char inputRequired;
@property (readonly, nonatomic) NSOrderedSet *contentItemClasses;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getContentCollection:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
