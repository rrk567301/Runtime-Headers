@interface ASDControl : ASDObject {
    unsigned int _objectClassID;
}

@property (nonatomic) unsigned int controlElement;
@property (nonatomic) unsigned int controlScope;

- (unsigned int)objectClass;
- (char)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (id)initWithPlugin:(id)a0;
- (unsigned int)baseClass;
- (char)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (char)isKindOfAudioClass:(unsigned int)a0;

@end
