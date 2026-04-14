@interface _AXFInvalidTextPosition : AXFTextPosition

- (id)description;
- (BOOL)isValid;
- (long long)type;
- (unsigned long long)indexValue;
- (id)descriptionWithoutType;

@end
