@class NSArray, NSData;

@interface WFDatabaseLegacyOrderingRecord : NSObject {
    void /* function */ shortcuts;
    void /* function */ folders;
    void /* function */ cloudKitMetadata;
}

@property (nonatomic, readonly) NSArray *shortcuts;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSData *cloudKitMetadata;

- (void).cxx_destruct;
- (id)init;
- (id)initWithShortcuts:(id)a0 folders:(id)a1 cloudKitMetadata:(id)a2;

@end
