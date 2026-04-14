@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (void)dealloc;
- (void)setObject:(id)a0;
- (id)object;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)values;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (id)source;
- (id)label;
- (void)setLabel:(id)a0;
- (void)setValues:(id)a0;
- (void)establishConnection;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)setSource:(id)a0;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (id)keyPaths;
- (void)setKeyPaths:(id)a0;

@end
