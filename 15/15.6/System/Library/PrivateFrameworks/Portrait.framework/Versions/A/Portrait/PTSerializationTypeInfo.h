@interface PTSerializationTypeInfo : NSObject

@property unsigned int type;
@property (retain) Class providerClass;
@property char isAtomContainerType;
@property char isProviderArrayType;

- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 providerClass:(Class)a1;

@end
