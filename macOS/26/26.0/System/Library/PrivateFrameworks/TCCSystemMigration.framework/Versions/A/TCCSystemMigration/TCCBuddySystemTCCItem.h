@class TCCSystemTCCMigrationItem, NSImage, NSString;

@interface TCCBuddySystemTCCItem : NSObject

@property (retain, nonatomic) TCCSystemTCCMigrationItem *tccMigrationItem;
@property (retain, nonatomic) NSImage *appIcon;
@property (retain, nonatomic) NSString *migrationStatusLabel;
@property (retain, nonatomic) NSString *localizedAppName;
@property (readonly) NSString *tccServiceName;

- (void).cxx_destruct;
- (id)initWithSystemTCCAuthorization:(id)a0;
- (void)setupAppIconAndMigrationStatusLabel:(id)a0;

@end
