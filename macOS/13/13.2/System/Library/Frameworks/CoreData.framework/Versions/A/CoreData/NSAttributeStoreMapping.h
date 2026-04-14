@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (BOOL)isEqual:(id)a0;
- (id)attribute;
- (id)initWithProperty:(id)a0;
- (int)externalType;
- (void)setExternalType:(int)a0;
- (id)sqlType;

@end
