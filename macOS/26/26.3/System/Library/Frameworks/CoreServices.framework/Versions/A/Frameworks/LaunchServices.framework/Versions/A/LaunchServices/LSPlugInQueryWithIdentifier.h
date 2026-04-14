@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isBindingMapValid;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifier:(id)a0 inMap:(int)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
