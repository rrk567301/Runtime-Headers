@class NSDictionary, NSData, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MDMConfigurationBase : NSObject <MDMConfigurationCommonProperties>

@property (retain, nonatomic) NSData *memberQueueLastPushTokenHash;
@property (retain, nonatomic) NSDate *memberQueuePushMagicMismatchDateMarker;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueMDMDictionary;
@property (readonly) NSDictionary *details;
@property (readonly) NSData *lastPushTokenHash;
@property (readonly) NSDate *pushMagicMismatchDateMarker;

+ (id)sharedConfigurationForChannel:(unsigned long long)a0;

- (unsigned long long)channelType;
- (id)init;
- (void)memberQueueForgetCurrentConfiguration;
- (void)refreshDetailsFromDisk;
- (BOOL)memberQueueReadConfigurationOutError:(id *)a0;
- (void).cxx_destruct;
- (id)retrieveMDMDictionaryWithError:(id *)a0;
- (id)_mdmFilePathForChannelType:(unsigned long long)a0;
- (id)_mdmPropertiesFilePathForChannelType:(unsigned long long)a0;
- (id)_memberQueueReadPropertiesForChannelType:(unsigned long long)a0 createIfMissingFile:(BOOL)a1 error:(id *)a2;
- (BOOL)_memberQueueWriteProperties:(id)a0 channelType:(unsigned long long)a1 error:(id *)a2;
- (id)getPropertyForKey:(id)a0 channelType:(unsigned long long)a1 error:(id *)a2;
- (id)getPropertyForKey:(id)a0 error:(id *)a1;
- (BOOL)removeMDMConfigurationForChannel:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeMDMConfigurationWithError:(id *)a0;
- (BOOL)setPropertyForKey:(id)a0 value:(id)a1 channelType:(unsigned long long)a2 error:(id *)a3;
- (BOOL)setPropertyForKey:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)updateMDMConfigurationForChannel:(unsigned long long)a0 createIfNeeded:(BOOL)a1 error:(id *)a2 updateBlock:(id /* block */)a3;
- (BOOL)updateMDMConfigurationWithCreateIfNeeded:(BOOL)a0 updateBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)updateMDMConfigurationWithUpdateBlock:(id /* block */)a0 error:(id *)a1;

@end
