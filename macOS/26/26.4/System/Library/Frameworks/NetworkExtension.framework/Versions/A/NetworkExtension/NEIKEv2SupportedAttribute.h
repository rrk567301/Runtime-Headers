@interface NEIKEv2SupportedAttribute : NEIKEv2StringAttribute

- (unsigned long long)attributeType;
- (id)typeDescription;
- (id)attributeName;
- (BOOL)validForChildlessSA;

@end
