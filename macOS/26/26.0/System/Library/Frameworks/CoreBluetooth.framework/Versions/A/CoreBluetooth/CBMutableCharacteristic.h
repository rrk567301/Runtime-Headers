@class NSArray, NSData, NSNumber, NSMutableArray;

@interface CBMutableCharacteristic : CBCharacteristic

@property (retain) NSNumber *ID;
@property (nonatomic) unsigned long long permissions;
@property (readonly, retain) NSMutableArray *subscribedCentrals;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;

- (void)dealloc;
- (id)initWithService:(id)a0 dictionary:(id)a1;
- (BOOL)handleCentralUnsubscribed:(id)a0;
- (BOOL)handleCentralSubscribed:(id)a0;
- (void)handlePowerNotOn;
- (id)description;
- (id)initWithType:(id)a0 properties:(unsigned long long)a1 value:(id)a2 permissions:(unsigned long long)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
