@interface MXSessionSecure : MXSessionBase

+ (void)initialize;
+ (id)getSetPropertiesOrder;
+ (BOOL)isNonSerializedCopyProperty:(id)a0;
+ (BOOL)isNonSerializedSetProperty:(id)a0;
+ (BOOL)isNonSerializedSetPropertyWhenSessionIsInactive:(id)a0;

- (int)copyPropertyForKeyInternal:(id)a0 valueOut:(id *)a1;
- (id)initWithOptions:(id)a0;
- (void)dealloc;
- (int)_beginInterruptionWithSecTask:(struct __SecTask { } *)a0 andFlags:(unsigned long long)a1;
- (int)_endInterruptionWithSecTask:(struct __SecTask { } *)a0 andStatus:(id)a1;
- (void)dumpDebugInfo;
- (int)setPropertyForKeyInternal:(id)a0 value:(id)a1 fromPropertiesBatch:(id)a2;

@end
