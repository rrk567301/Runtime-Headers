@class NSString;

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) char failed;
@property (nonatomic) char canceled;
@property (copy, nonatomic) NSString *sourceMapURL;
@property (copy, nonatomic) NSString *targetId;

- (id)initWithUrl:(id)a0 type:(long long)a1 mimeType:(id)a2;

@end
