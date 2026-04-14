@class NSString;

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_attributeType;
    NSString *_attributeValue;
}

- (void)setLabel:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)source;
- (void)setSource:(id)a0;
- (id)attributeType;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)setAttributeType:(id)a0;
- (id)label;
- (void)dealloc;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (BOOL)_isAXConnector;
- (id)attributeValue;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setAttributeValue:(id)a0;

@end
