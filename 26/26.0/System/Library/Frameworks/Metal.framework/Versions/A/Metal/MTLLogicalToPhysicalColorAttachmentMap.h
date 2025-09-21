@interface MTLLogicalToPhysicalColorAttachmentMap : NSObject <NSCopying> {
    unsigned long long _logicalToPhysicalMap[8];
}

- (void)reset;
- (const unsigned long long *)map:(unsigned long long *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)getPhysicalIndexForLogicalIndex:(unsigned long long)a0;
- (void)setPhysicalIndex:(unsigned long long)a0 forLogicalIndex:(unsigned long long)a1;

@end
