@class NSString;

@interface SVCProperty : NSObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *instanceVariableName;
@property (readonly) long long type;
@property (readonly) Class objectClass;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly, getter=isNonAtomic) BOOL nonAtomic;
@property (readonly) long long association;
@property (readonly) SEL customGetterSelector;
@property (readonly) SEL customSetterSelector;
@property (readonly, getter=isWeakReference) BOOL weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)a0;
+ (id)propertiesForProtocol:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 attributes:(const char *)a1;

@end
