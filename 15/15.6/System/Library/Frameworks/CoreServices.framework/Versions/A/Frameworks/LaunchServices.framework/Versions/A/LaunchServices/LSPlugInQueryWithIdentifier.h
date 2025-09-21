@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (char)isBindingMapValid;

@end
