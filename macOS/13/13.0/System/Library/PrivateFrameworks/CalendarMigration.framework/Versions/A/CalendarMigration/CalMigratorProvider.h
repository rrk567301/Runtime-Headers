@interface CalMigratorProvider : NSObject

+ (id)defaultCalendarMigrationDefaultsProvider;
+ (id)defaultMigrationAccountStore;
+ (id)defaultContactsProvider;
+ (id)reminderMigrator;
+ (id)reminderMigratorWithDefaultsProvider:(id)a0;
+ (id)reminderMigratorWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;

@end
