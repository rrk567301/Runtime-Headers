@class NSArray, ISGraphicIconConfiguration, NSString;

@interface TCCBuddySystemTCCGroupIconConfig : NSObject

@property (retain, nonatomic) NSArray *symbolColor;
@property (retain, nonatomic) NSArray *enclosureColor;
@property (readonly) ISGraphicIconConfiguration *iconConfig;
@property (readonly) NSString *symbolName;

+ (id)groupIconConfigForTCCService:(id)a0;

- (void).cxx_destruct;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1 enclosureColor:(id)a2;

@end
