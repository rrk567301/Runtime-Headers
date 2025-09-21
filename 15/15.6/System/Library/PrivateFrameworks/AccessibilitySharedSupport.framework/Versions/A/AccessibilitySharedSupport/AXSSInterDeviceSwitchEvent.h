@class NSString, NSArray;

@interface AXSSInterDeviceSwitchEvent : NSObject

@property (copy, nonatomic) NSString *switchIdentifier;
@property (copy, nonatomic) NSString *switchDisplayName;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSArray *longPressActions;
@property (nonatomic) char isDown;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSwitchIdentifier:(id)a0 switchDisplayName:(id)a1 deviceIdentifier:(id)a2 actions:(id)a3 isDown:(char)a4;
- (id)initWithSwitchIdentifier:(id)a0 switchDisplayName:(id)a1 deviceIdentifier:(id)a2 actions:(id)a3 longPressActions:(id)a4 isDown:(char)a5;

@end
