@class NSString;

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_attributeType;
    NSString *_attributeValue;
}

- (void)dealloc;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)source;
- (id)label;
- (void)setLabel:(id)a0;
- (id)attributeType;
- (void)establishConnection;
- (void)setSource:(id)a0;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (BOOL)_isAXConnector;
- (void)setAttributeType:(id)a0;
- (id)attributeValue;
- (void)setAttributeValue:(id)a0;

@end
