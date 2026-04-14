@class NSString, BlastDoorMetadata;

@interface BlastDoorRecoverJunkCommand : NSObject {
    void /* unknown type, empty encoding */ recoverJunkCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
