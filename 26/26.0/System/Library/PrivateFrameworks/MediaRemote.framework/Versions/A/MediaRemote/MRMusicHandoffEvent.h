@class NSString, NSData, _MRMusicHandoffEventProtobuf;

@interface MRMusicHandoffEvent : NSObject

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRMusicHandoffEventProtobuf *protobuf;
@property (readonly, nonatomic) long long type;

- (id)initWithType:(long long)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;

@end
