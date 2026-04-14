@interface KHDBOpenableModel : KHDBUuidModel {
    unsigned long long _openChangesMask;
}

- (void)open;
- (void)setIsOpen:(BOOL)a0;
- (BOOL)isOpen;
- (void)close;
- (void)includeInOpenChanges:(unsigned long long)a0;
- (unsigned long long)setToClosed;

@end
