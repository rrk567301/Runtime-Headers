@class NSString, NSDate;

@interface AXVocalShortcutsSettingsEvent : NSObject

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic, getter=isEnabled) BOOL state;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *processName;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithState:(BOOL)a0 source:(id)a1;

@end
