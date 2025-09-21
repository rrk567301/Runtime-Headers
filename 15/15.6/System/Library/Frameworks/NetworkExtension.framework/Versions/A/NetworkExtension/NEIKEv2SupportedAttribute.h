@interface NEIKEv2SupportedAttribute : NEIKEv2StringAttribute

+ (id)copyTypeDescription;

- (unsigned long long)attributeType;
- (id)attributeName;
- (char)validForChildlessSA;

@end
