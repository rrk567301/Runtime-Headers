@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (id)keyPaths;
- (void)setKeyPaths:(id)a0;
- (id)values;
- (void)setObject:(id)a0;
- (void)dealloc;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSource:(id)a0;
- (id)label;
- (id)destination;
- (void)setValues:(id)a0;
- (id)object;
- (id)initWithCoder:(id)a0;
- (void)setLabel:(id)a0;
- (id)source;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
