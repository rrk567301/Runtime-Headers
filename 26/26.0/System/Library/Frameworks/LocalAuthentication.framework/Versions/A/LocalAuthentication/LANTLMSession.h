@interface LANTLMSession : NSObject

+ (id)makeSessionWithUUID:(id)a0 identifier:(id)a1;

- (id)init;
- (BOOL)finish:(id *)a0;
- (id)start:(id *)a0;
- (id)initWithUuid:(id)a0 identifier:(id)a1;
- (id)verifyResponse:(id)a0 error:(id *)a1;

@end
