@class NSString;

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_attributeType;
    NSString *_attributeValue;
}

- (void)dealloc;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSource:(id)a0;
- (id)attributeType;
- (id)label;
- (id)destination;
- (id)initWithCoder:(id)a0;
- (void)setAttributeType:(id)a0;
- (void)setLabel:(id)a0;
- (id)source;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (BOOL)_isAXConnector;
- (id)attributeValue;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setAttributeValue:(id)a0;

@end
