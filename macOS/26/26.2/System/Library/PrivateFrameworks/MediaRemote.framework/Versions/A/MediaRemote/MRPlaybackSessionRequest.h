@class NSString, MRPlayerPath, _MRPlaybackSessionRequestProtobuf, NSDictionary, NSData;

@interface MRPlaybackSessionRequest : NSObject

@property (readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) MRPlayerPath *destinationPlayerPath;
@property (copy, nonatomic) NSDictionary *destinationCommandInfo;
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) BOOL isPreflight;

- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProtobuf:(id)a0;

@end
