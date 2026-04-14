@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (BOOL)isEqual:(id)a0;
- (id)attribute;
- (id)initWithProperty:(id)a0;
- (void)setExternalType:(int)a0;
- (int)externalType;
- (id)sqlType;

@end
