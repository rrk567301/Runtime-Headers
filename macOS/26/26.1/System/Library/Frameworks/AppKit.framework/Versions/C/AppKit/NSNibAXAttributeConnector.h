@class NSString;

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_attributeType;
    NSString *_attributeValue;
}

- (void)setDestination:(id)a0;
- (void)setLabel:(id)a0;
- (void)setSource:(id)a0;
- (id)source;
- (void)setAttributeType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)attributeType;
- (id)initWithCoder:(id)a0;
- (id)destination;
- (id)label;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (BOOL)_isAXConnector;
- (id)attributeValue;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setAttributeValue:(id)a0;

@end
