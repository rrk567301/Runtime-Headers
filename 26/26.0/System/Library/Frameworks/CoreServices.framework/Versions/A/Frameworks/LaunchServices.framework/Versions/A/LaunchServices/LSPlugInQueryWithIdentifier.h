@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (id)_identifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isBindingMapValid;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;

@end
