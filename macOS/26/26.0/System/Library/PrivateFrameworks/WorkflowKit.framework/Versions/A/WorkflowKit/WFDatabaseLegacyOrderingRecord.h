@class NSArray, NSData;

@interface WFDatabaseLegacyOrderingRecord : NSObject {
    void /* function */ shortcuts;
    void /* function */ folders;
    void /* function */ cloudKitMetadata;
}

@property (nonatomic, readonly) NSArray *shortcuts;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSData *cloudKitMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)initWithShortcuts:(id)a0 folders:(id)a1 cloudKitMetadata:(id)a2;

@end
