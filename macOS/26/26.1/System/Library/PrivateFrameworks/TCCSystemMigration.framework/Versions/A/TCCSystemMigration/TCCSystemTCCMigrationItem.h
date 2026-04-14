@class TCCSystemTCCAuthorization;

@interface TCCSystemTCCMigrationItem : NSObject

@property (readonly) TCCSystemTCCAuthorization *systemTCCItem;
@property (readonly) unsigned long long status;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSystemTCCItem:(id)a0 status:(unsigned long long)a1;

@end
