@class SharedChannelActivityRequest, NSUUID, NSArray, NSNumber, NSMutableArray;

@interface SKAProtobufMessage : FTProtobufMessage

@property (retain, nonatomic) SharedChannelActivityRequest *request;
@property (retain, nonatomic) NSNumber *expectedResponseCount;
@property (retain, nonatomic) NSNumber *receivedResponseCount;
@property (retain, nonatomic) NSMutableArray *mutableResponses;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *responses;

+ (id)logger;

- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)expectingMoreResponses;
- (id)initWithPushTopic:(id)a0 request:(id)a1;

@end
