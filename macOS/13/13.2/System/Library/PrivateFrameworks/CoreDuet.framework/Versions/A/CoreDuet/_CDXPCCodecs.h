@interface _CDXPCCodecs : NSObject

+ (id)_log;
+ (BOOL)addDeviceIDs:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (id)deviceIDsFromDictionary:(id)a0 error:(id *)a1;
+ (void)addError:(id)a0 toReply:(id)a1;
+ (id)errorFromReply:(id)a0;
+ (long long)eventTypeWithEvent:(id)a0;
+ (id)fetchPropertiesReplyWithEvent:(id)a0 error:(id)a1;
+ (id)keepAliveEventWithKeepAlive:(BOOL)a0 error:(id *)a1;
+ (BOOL)keepAliveFromKeepAliveEvent:(id)a0 error:(id *)a1;
+ (id)keepAliveReplyWithEvent:(id)a0 error:(id)a1;
+ (id)notificationEventWithRegistrationIdentifier:(id)a0 info:(id)a1 error:(id *)a2;
+ (BOOL)parseNotificationEvent:(id)a0 registrationIdentifier:(id *)a1 info:(id *)a2 error:(id *)a3;
+ (id)fetchProxySourceDeviceUUIDEvent;
+ (id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)a0 sourceDeviceUUID:(id)a1 error:(id)a2;
+ (id)parseProxySourceDeviceUUIDEvent:(id)a0 error:(id *)a1;
+ (id)requestActivateDevicesEvent;
+ (id)requestActivateDevicesReplyWithEvent:(id)a0 error:(id)a1;
+ (id)messageTypeFromEvent:(id)a0;
+ (id)supportedClassesToUnarchive;

@end
