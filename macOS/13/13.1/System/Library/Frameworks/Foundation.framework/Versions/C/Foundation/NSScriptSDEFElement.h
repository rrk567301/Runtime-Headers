@class NSString, NSDictionary, NSMutableDictionary;

@interface NSScriptSDEFElement : NSObject {
    NSString *_name;
    NSDictionary *_attributes;
    NSMutableDictionary *_descriptionsPerSubelementName;
}

- (void)dealloc;
- (id)name;
- (id)description;
- (id)attributes;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (void)addDescription:(id)a0 forSubelementName:(id)a1;
- (id)valueForOptionalAttributeKey:(id)a0;
- (id)valueForRequiredAttributeKey:(id)a0;
- (id)descriptionForOptionalSubelementName:(id)a0;
- (id)zeroOrMoreDescriptionsForSubelementName:(id)a0;
- (id)oneOrMoreDescriptionsForSubelementName:(id)a0;

@end
