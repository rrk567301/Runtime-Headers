@interface FBKDeviceToken : NSObject

+ (void)clearDeviceTokenForParticipantID:(id)a0;
+ (void)clearAllDeviceTokens;
+ (id)fetchDeviceTokenForParticipantID:(id)a0;
+ (void)setDeviceToken:(id)a0 forParticipantID:(id)a1;
+ (id)_basicParameterWithoutLabel;
+ (id)_queryForParticipantID:(id)a0 isForWriting:(BOOL)a1;
+ (id)_basicParametersForWriting;

@end
