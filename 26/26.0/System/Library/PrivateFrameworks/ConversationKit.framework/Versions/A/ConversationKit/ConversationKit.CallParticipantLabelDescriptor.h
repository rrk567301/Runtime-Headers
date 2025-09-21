@class NSArray, NSString;

@interface ConversationKit.CallParticipantLabelDescriptor : NSObject <CNKCallParticipantLabelDescriptorProtocol> {
    void /* function */ strings;
    void /* function */ secondaryString;
    void /* function */ sourceString;
    void /* function */ durationString;
    void /* function */ localizedSenderIdentity;
}

@property (nonatomic, copy) NSArray *strings;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic, copy) NSString *sourceString;
@property (nonatomic, copy) NSString *durationString;
@property (nonatomic) long long layoutState;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) BOOL isCallIdentification;
@property (nonatomic, copy) NSString *localizedSenderIdentity;

- (id)init;
- (void).cxx_destruct;

@end
