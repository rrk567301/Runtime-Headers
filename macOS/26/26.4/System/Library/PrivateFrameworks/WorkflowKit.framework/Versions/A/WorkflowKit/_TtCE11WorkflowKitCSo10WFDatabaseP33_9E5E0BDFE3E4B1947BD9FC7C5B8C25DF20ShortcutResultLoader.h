@interface _TtCE11WorkflowKitCSo10WFDatabaseP33_9E5E0BDFE3E4B1947BD9FC7C5B8C25DF20ShortcutResultLoader : NSObject <WFDatabaseResultLoader> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ sortMode;
    void /* unknown type, empty encoding */ filters;
}

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)loadDescriptorsWithState:(id *)a0 error:(id *)a1;
- (long long)countForResult;

@end
