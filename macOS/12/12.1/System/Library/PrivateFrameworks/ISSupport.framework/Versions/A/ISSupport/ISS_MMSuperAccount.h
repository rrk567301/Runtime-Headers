@interface ISS_MMSuperAccount : ISS_MMAccount

+ (id)accountWithName:(id)a0 password:(id)a1 applicationID:(id)a2;

- (id)init;
- (id)name;
- (id)applicationName;
- (void)setApplicationName:(id)a0;
- (id)applicationID;
- (void)setManagedName:(id)a0;
- (id)managedName;
- (id)initWithName:(id)a0 password:(id)a1 applicationID:(id)a2;

@end
