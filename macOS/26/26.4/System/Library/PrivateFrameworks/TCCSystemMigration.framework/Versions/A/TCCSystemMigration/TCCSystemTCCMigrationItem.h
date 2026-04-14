@class TCCSystemTCCAuthorization;

@interface TCCSystemTCCMigrationItem : NSObject

@property (readonly) TCCSystemTCCAuthorization *systemTCCItem;
@property (readonly) unsigned long long status;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSystemTCCItem:(id)a0 status:(unsigned long long)a1;

@end
