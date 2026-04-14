@class NSString, NSSet;

@interface ACDMockManagedDataclass : ACDManagedDataclass {
    NSString *name;
    NSSet *provisionedAccounts;
    NSSet *syncableTypes;
    NSSet *supportedTypes;
    NSSet *enabledAccounts;
}

- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)enabledAccounts;
- (id)provisionedAccounts;
- (void)setEnabledAccounts:(id)a0;
- (void)setProvisionedAccounts:(id)a0;
- (void)setSupportedTypes:(id)a0;
- (void)setSyncableTypes:(id)a0;
- (id)supportedTypes;
- (id)syncableTypes;

@end
