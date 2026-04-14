@class NSData;

@interface B2PDataSessionDataResponse : B2PResponse

@property (readonly) unsigned char sessionID;
@property (readonly) int dataSessionStatus;
@property (readonly) NSData *sessionData;

- (id)description;
- (id)data;
- (void).cxx_destruct;
- (BOOL)parseResponse:(id)a0;
- (id)initWithRoute:(unsigned char)a0 status:(int)a1 sessionID:(unsigned char)a2 dataSessionStatus:(int)a3 data:(id)a4;

@end
