@class NSString, NSArray, BlastDoorMetadata;

@interface BlastDoorTranslationCommand : NSObject {
    void /* unknown type, empty encoding */ translationCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *sourceLocaleIdentifier;
@property (nonatomic, readonly) NSString *destinationLocaleIdentifier;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSString *requestID;

- (void).cxx_destruct;
- (id)init;

@end
