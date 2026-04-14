@interface MTLLogicalToPhysicalColorAttachmentMap : NSObject <NSCopying> {
    unsigned long long _logicalToPhysicalMap[8];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (const unsigned long long *)map:(unsigned long long *)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (unsigned long long)getPhysicalIndexForLogicalIndex:(unsigned long long)a0;
- (void)setPhysicalIndex:(unsigned long long)a0 forLogicalIndex:(unsigned long long)a1;

@end
