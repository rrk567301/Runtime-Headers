@interface BWNodeConfigurationEndOfDataMessage : BWNodeMessage {
    long long _configurationID;
}

@property (readonly) long long configurationID;

+ (id)newMessageWithConfigurationID:(long long)a0;

@end
