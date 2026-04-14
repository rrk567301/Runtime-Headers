@class NSString;

@interface SKDCSItemRecord : SKDItemRecord {
    NSString *_bundleID;
}

@property (readonly, nonatomic) unsigned int indexType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2 attributes:(id)a3;
- (id)initWithIdentifier:(id)a0 bundleID:(id)a1 journalCookie:(id)a2 serialNumber:(long long)a3 indexType:(unsigned int)a4 attributes:(id)a5;

@end
