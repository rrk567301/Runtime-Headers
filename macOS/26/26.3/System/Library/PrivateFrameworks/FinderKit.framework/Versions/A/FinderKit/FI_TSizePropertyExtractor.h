@interface FI_TSizePropertyExtractor : FI_IPropertySizeExtractor {
    unsigned int _property;
}

- (id)initWithProperty:(unsigned int)a0;
- (id)defaultValue;
- (id)computeValue;
- (int)extractValueFromNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isWaitingForPendingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
