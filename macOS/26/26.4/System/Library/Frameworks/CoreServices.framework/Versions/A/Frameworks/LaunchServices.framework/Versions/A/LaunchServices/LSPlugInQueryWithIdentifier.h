@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_identifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isBindingMapValid;

@end
