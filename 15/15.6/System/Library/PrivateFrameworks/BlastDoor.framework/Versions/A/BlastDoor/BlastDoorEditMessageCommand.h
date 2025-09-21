@class NSString, BlastDoorMessageContent, BlastDoorMetadata;

@interface BlastDoorEditMessageCommand : NSObject {
    void /* unknown type, empty encoding */ editMessageCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *editedMessageGUID;
@property (nonatomic, readonly) long long editType;
@property (nonatomic, readonly) char has_editedMessagePartIndex;
@property (nonatomic, readonly) long long editedMessagePartIndex;
@property (nonatomic, readonly) BlastDoorMessageContent *editedMessagePartBody;
@property (nonatomic, readonly) char has_shouldRetractSubject;
@property (nonatomic, readonly) char shouldRetractSubject;
@property (nonatomic, readonly) BlastDoorMessageContent *messageContent;

- (id)init;
- (void).cxx_destruct;

@end
