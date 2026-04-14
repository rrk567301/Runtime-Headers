@class NSDictionary, NSArray;

@interface AVSStore : NSObject

@property (class, nonatomic, readonly) NSDictionary *shortcutsNamesDictionary;
@property (class, nonatomic, readonly) NSArray *shortcuts;

- (void).cxx_destruct;
- (id)init;
- (void)deleteAllShortcuts;
- (void)deleteShortcutWithIdentifier:(id)a0;

@end
