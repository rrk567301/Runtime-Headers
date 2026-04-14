@class NSProgressIndicator, NSWindow, NSTextField;
@protocol CalUIWindowDelegate;

@interface CalUIMigrationController : NSObject {
    id<CalUIWindowDelegate> _mainWindowDelegate;
    int _sheetCurrentlyDisplayedType;
    struct _NSModalSession { } *_modalSession;
    BOOL _displayingError;
    int _dataClasses;
    BOOL _listeningForSchemaChanges;
}

@property (retain) NSProgressIndicator *progressBar;
@property (retain) NSTextField *textField;
@property (retain) NSWindow *window;
@property (retain) NSWindow *error;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopListeningForLocalToServer;
- (void)stopListeningForSchemaChanges;
- (BOOL)_isPersistenceUnavailableForMigrationType:(int)a0;
- (BOOL)_stateDisplayedIsPersistenceUnavailable;
- (void)closeMigrationPanel:(id)a0;
- (void)startMigrationPanelWithType:(int)a0;
- (void)_replyIfPersistenceIsAvailableWithTimeout:(id /* block */)a0;
- (void)handleProgress:(id)a0;
- (void)_schemaChangeBegun:(id)a0;
- (void)_showSheetIfSchemaMigratingOrAgentNotResponding;
- (void)_migrateToServerBegun:(id)a0;
- (void)showErrorPanel:(id)a0;
- (void)firstTimeCheckForLocalToServerMigration;
- (void)dismissErrorPanel:(id)a0;
- (void)_startSheet:(id)a0;
- (void)updateMigrationPanelTextForType:(int)a0;
- (void)periodicallyCheckForPersistence;
- (void)periodicallyCheckForLocalToServerMigration;
- (void)periodicallyCheckForPersistence:(unsigned long long)a0;
- (void)periodicallyCheckForLocalToServerMigration:(BOOL)a0;
- (void)_stopSheet:(id)a0;
- (id)initWithWindowDelegate:(id)a0;
- (void)beginListeningForMigrationOfSchemaAndDataClasses:(int)a0;
- (void)tryMigrationAgain:(id)a0;

@end
