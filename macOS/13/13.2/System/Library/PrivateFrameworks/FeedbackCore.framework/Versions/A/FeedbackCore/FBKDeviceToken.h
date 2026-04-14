@interface FBKDeviceToken : NSObject

+ (void)clearAllDeviceTokens;
+ (id)fetchDeviceTokenForParticipantID:(id)a0;
+ (void)setDeviceToken:(id)a0 forParticipantID:(id)a1;
+ (void)clearDeviceTokenForParticipantID:(id)a0;
+ (id)_basicParametersForWriting;
+ (id)_basicParameterWithoutLabel;
+ (id)_queryForParticipantID:(id)a0 isForWriting:(BOOL)a1;

@end
