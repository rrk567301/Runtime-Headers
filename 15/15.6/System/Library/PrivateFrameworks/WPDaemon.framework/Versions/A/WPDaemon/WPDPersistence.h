@class NSString;

@interface WPDPersistence : NSObject

@property (nonatomic) char needsInit;
@property (nonatomic) char systemFirstUnlocked;
@property (retain, nonatomic) NSString *bootUUID;
@property (nonatomic) char isRangingEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentBootSessionUUID;
- (void)deletePropertyValue:(id)a0;
- (void)firstUnlockedWithEvent:(char)a0;
- (char)readBoolPropertyValue:(id)a0;
- (id)readStringPropertyValue:(id)a0;
- (void)synchronisePrefs;
- (void)writeBoolProperty:(id)a0 Value:(char)a1;
- (void)writeStringProperty:(id)a0 Value:(id)a1;

@end
