@class NSString, NSMutableDictionary;

@interface UXDestinationAuxiliaryStore : NSObject <NSSecureCoding> {
    NSMutableDictionary *_namespaceDict;
    NSMutableDictionary *_globalDict;
    NSString *_lastAction;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_allowedClassesForNSCoding;
- (id)_dictionaryForNamespace:(id)a0;
- (void)_setRawValue:(id)a0 forKey:(id)a1 inNamespace:(id)a2;
- (void)addEntriesFromDictionary:(id)a0 inNamespace:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0 inNamespace:(id)a1;
- (id)nextActionForNamespace:(id)a0;
- (void)setBlock:(id /* block */)a0 forKey:(id)a1 inNamespace:(id)a2;
- (void)setNextAction:(id)a0 forNamespace:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 inNamespace:(id)a2;
- (id)valueForKey:(id)a0 inNamespace:(id)a1;

@end
