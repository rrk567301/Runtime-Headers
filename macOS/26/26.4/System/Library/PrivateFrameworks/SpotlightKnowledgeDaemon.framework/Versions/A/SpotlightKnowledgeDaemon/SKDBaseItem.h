@class NSString, NSDictionary;
@protocol SKDFeedback, SKDEventInfo;

@interface SKDBaseItem : NSObject <SKDEvent>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned char type;
@property (nonatomic) unsigned char status;
@property (retain, nonatomic) id<SKDEventInfo> info;
@property (retain, nonatomic) id<SKDFeedback> feedback;
@property (copy, nonatomic) NSDictionary *loggingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)message;
- (id)statusMessage;
- (id)initWithIdentifier:(id)a0 info:(id)a1;
- (id)initWithIdentifier:(id)a0 status:(unsigned char)a1 info:(id)a2;
- (id)initWithIdentifier:(id)a0 type:(unsigned char)a1 status:(unsigned char)a2 info:(id)a3 feedback:(id)a4;
- (id)typeMessage;

@end
