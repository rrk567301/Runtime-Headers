@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (void)setKeyPaths:(id)a0;
- (void)setLabel:(id)a0;
- (void)setValues:(id)a0;
- (id)destination;
- (id)keyPaths;
- (id)values;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)source;
- (id)object;
- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0;
- (void)setSource:(id)a0;
- (void)dealloc;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
