@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (void)setKeyPaths:(id)a0;
- (id)keyPaths;
- (id)object;
- (void)setLabel:(id)a0;
- (id)source;
- (id)destination;
- (void)setObject:(id)a0;
- (void)setDestination:(id)a0;
- (id)label;
- (void)setValues:(id)a0;
- (id)values;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setSource:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
