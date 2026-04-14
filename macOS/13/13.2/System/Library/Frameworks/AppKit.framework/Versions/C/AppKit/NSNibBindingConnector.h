@class NSString, NSDictionary;

@interface NSNibBindingConnector : NSNibConnector <NSCoding> {
    NSString *_binding;
    NSString *_keyPath;
    NSDictionary *_options;
    struct __nibBindingConnectorFlags { unsigned char _hasEstablishedConnection : 1; unsigned int _reservedNibBindingConnector : 31; } _nibBindingConnectorFlags;
    NSNibBindingConnector *_previousConnector;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binding;
- (id)options;
- (void)setOptions:(id)a0;
- (id)keyPath;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setBinding:(id)a0;
- (void)_updateForVersion:(long long)a0;
- (void)_updateLabel;
- (void)setKeyPath:(id)a0;
- (void)_setPreviousNibBindingConnector:(id)a0;
- (id)_previousNibBindingConnector;

@end
