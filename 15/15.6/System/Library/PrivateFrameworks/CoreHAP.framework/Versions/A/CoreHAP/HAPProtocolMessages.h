@interface HAPProtocolMessages : HMFObject

+ (id)logCategory;
+ (char)_parseEmptyResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(char)a2;
+ (id)constructAuthChallengeRequest:(id)a0 nonce:(id)a1 outTID:(char *)a2;
+ (id)constructInfoRequest:(id)a0 outTID:(char *)a1;
+ (id)constructInfoRequest:(id)a0 serviceUUID:(id)a1 outTID:(char *)a2;
+ (id)constructRequestHeaderFor:(unsigned long long)a0 instanceID:(id)a1 outTID:(char *)a2;
+ (id)constructTokenRequest:(id)a0 outTID:(char *)a1;
+ (id)constructTokenUpdateRequest:(id)a0 token:(id)a1 outTID:(char *)a2;
+ (char)parseAuthChallengeResponse:(id)a0 expectedTID:(unsigned char)a1 outChallengeResponse:(id *)a2 outMFICert:(id *)a3 withHeader:(char)a4;
+ (id)parseInfoResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(char)a2;
+ (char)parseTokenResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(char)a2 outToken:(id *)a3 outUUID:(id *)a4;
+ (char)parseTokenUpdateResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(char)a2;

@end
