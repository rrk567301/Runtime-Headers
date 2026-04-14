@interface CALPropertyMultiValue : CALPropertyValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasKey:(id)a0;
- (void)removeSubValue:(id)a0;
- (id)initWithSubValues:(id)a0 withType:(int)a1;
- (void)setSubValue:(id)a0 forKey:(id)a1;
- (id)subValueForKey:(id)a0;

@end
