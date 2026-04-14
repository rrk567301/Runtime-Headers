@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)initWithProperty:(id)a0;
- (id)sqlType;
- (id)attribute;
- (void)setExternalType:(int)a0;
- (int)externalType;
- (BOOL)isEqual:(id)a0;

@end
