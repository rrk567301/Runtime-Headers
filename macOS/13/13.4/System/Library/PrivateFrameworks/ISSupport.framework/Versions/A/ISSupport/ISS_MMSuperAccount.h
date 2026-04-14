@interface ISS_MMSuperAccount : ISS_MMAccount

+ (id)accountWithName:(id)a0 password:(id)a1 applicationID:(id)a2;

- (id)init;
- (id)name;
- (id)applicationName;
- (id)applicationID;
- (void)setApplicationName:(id)a0;
- (void)setManagedName:(id)a0;
- (id)initWithName:(id)a0 password:(id)a1 applicationID:(id)a2;
- (id)managedName;

@end
