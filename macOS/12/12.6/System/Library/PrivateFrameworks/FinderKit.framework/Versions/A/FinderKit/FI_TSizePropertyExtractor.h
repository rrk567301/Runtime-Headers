@interface FI_TSizePropertyExtractor : FI_IPropertySizeExtractor {
    unsigned int _property;
}

- (id)defaultValue;
- (id)initWithProperty:(unsigned int)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (int)extractValueFromNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)computeValue;
- (BOOL)isWaitingForPendingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
