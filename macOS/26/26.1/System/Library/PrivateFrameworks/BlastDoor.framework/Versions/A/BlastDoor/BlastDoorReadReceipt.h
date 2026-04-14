@class NSString, NSArray, BlastDoorMetadata;

@interface BlastDoorReadReceipt : NSObject {
    void /* unknown type, empty encoding */ readReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) BOOL has_originalMessageTimestamp;
@property (nonatomic, readonly) unsigned long long originalMessageTimestamp;

- (void).cxx_destruct;
- (id)init;

@end
