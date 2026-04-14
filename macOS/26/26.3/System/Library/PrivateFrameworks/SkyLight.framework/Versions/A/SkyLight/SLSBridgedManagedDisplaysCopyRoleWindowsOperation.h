@class NSArray;

@interface SLSBridgedManagedDisplaysCopyRoleWindowsOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *displayIdentifiers;
@property (readonly) unsigned long long role;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayIdentifiers:(id)a0 role:(unsigned long long)a1;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
