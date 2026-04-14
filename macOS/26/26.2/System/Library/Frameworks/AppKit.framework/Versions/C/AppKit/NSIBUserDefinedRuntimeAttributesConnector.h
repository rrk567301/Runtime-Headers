@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (id)keyPaths;
- (void)setKeyPaths:(id)a0;
- (void)setLabel:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)object;
- (void)setObject:(id)a0;
- (id)values;
- (void)encodeWithCoder:(id)a0;
- (id)source;
- (void)setSource:(id)a0;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)setValues:(id)a0;
- (id)label;
- (void)dealloc;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
