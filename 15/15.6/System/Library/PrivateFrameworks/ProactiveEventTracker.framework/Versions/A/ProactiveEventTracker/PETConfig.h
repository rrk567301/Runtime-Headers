@class NSDictionary;

@interface PETConfig : NSObject {
    NSDictionary *_messageGroups;
}

@property (readonly) unsigned long long version;
@property (readonly) NSDictionary *configDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)writeToFile:(id)a0;
- (id)initWithFile:(id)a0;
- (id)_configForMessageName:(id)a0;
- (void)_enumerateGroupConfigsWithBlock:(id /* block */)a0;
- (id)_groupConfigForMessageName:(id)a0;
- (id)_nestedFieldsHelper:(id)a0;
- (id)_whitelistHelper:(id)a0;
- (id)bucketsForMessageName:(id)a0;
- (double)deviceSamplingForMessageName:(id)a0 isSeed:(char)a1;
- (id)groupForMessageName:(id)a0;
- (char)isAggregatedForMessageName:(id)a0;
- (char)isChinaEnabledForMessageName:(id)a0 messageGroup:(id)a1;
- (char)isTVOSEnabledForMessageName:(id)a0 messageGroup:(id)a1;
- (double)messageSamplingForMessageName:(id)a0 isSeed:(char)a1;
- (id)nestedFieldsForMessageName:(id)a0;
- (unsigned long long)samplingLimitForMessageGroup:(id)a0;
- (char)shouldUploadToFBFv2;
- (char)shouldUploadToFBFv2ForCarryAndSeed;
- (char)shouldUploadToParsec;
- (unsigned long long)sigFigsForMessageName:(id)a0;
- (id)whitelistForMessageName:(id)a0;

@end
