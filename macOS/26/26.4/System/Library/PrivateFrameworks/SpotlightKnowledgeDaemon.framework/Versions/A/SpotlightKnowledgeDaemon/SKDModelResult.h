@class NSString, NSDictionary;
@protocol SKDFeedback, SKDEventInfo;

@interface SKDModelResult : NSObject <SKDModelResult>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, nonatomic) id<SKDEventInfo> info;
@property (readonly, nonatomic) id<SKDFeedback> feedback;
@property (copy, nonatomic) NSDictionary *loggingOptions;
@property (readonly, nonatomic) int inputID;
@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStatus:(unsigned char)a0;
- (void).cxx_destruct;
- (id)message;
- (id)statusMessage;
- (id)initWithInputID:(int)a0 identifier:(id)a1 status:(unsigned char)a2 info:(id)a3;
- (id)initWithInputID:(int)a0 identifier:(id)a1 value:(id)a2;
- (id)typeMessage;

@end
