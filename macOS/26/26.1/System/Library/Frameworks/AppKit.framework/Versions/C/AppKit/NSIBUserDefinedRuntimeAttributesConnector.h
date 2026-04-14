@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (void)setObject:(id)a0;
- (void)setKeyPaths:(id)a0;
- (void)setDestination:(id)a0;
- (id)object;
- (void)setLabel:(id)a0;
- (void)setSource:(id)a0;
- (id)source;
- (id)values;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)keyPaths;
- (void)setValues:(id)a0;
- (id)destination;
- (id)label;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
