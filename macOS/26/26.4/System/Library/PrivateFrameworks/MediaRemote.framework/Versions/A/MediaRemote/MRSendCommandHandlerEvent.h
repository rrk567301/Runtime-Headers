@class NSString, _MRSendCommandMessageProtobuf, NSDictionary;

@interface MRSendCommandHandlerEvent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _MRSendCommandMessageProtobuf *protobuf;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) NSString *commandDescription;
@property (readonly, nonatomic) NSDictionary *options;

+ (id)eventWithCommand:(unsigned int)a0 options:(id)a1;

- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCommand:(unsigned int)a0 options:(id)a1;

@end
