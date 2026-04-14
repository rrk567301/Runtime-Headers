@class NSString, NSDictionary, NSMutableDictionary;
@protocol SKDEventInfo;

@interface SKDEvent : NSObject <SKDEvent> {
    NSMutableDictionary *_feedback;
}

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *feedback;
@property (readonly, nonatomic) id<SKDEventInfo> info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)message;
- (id)initWithStatus:(unsigned char)a0;
- (void)updateInfo:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus:(unsigned char)a0;
- (id)statusMessage;
- (void)addFeedbackFromDictionary:(id)a0;
- (id)initWithStatus:(unsigned char)a0 identifier:(id)a1 info:(id)a2;
- (void)addFeedback:(id)a0 value:(id)a1;
- (id)initWithStatus:(unsigned char)a0 identifier:(id)a1;
- (id)initWithType:(unsigned char)a0 status:(unsigned char)a1 identifier:(id)a2 info:(id)a3;
- (id)typeMessage;

@end
