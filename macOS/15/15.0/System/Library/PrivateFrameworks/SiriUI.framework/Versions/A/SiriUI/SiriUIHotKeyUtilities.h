@interface SiriUIHotKeyUtilities : NSObject

+ (int)getMenuEntryForSelectedHotKey:(id)a0;
+ (int)getMenuEntryForSelectedHotKeySAE:(unsigned short)a0 virtualKey:(unsigned short)a1 modifier:(unsigned int)a2;
+ (int)getMenuEntryForSelectedHotKeySiriX:(unsigned short)a0 virtualKey:(unsigned short)a1 modifier:(unsigned int)a2;
+ (id)getSOKeyMenuEntryFunctionSpaceString;
+ (id)getSOKeyMenuEntryGlobeSString;
+ (id)getSOKeyMenuEntryNoneString;
+ (id)getSelectedHotKeyForMenuEntry:(int)a0;
+ (id)getcustomizedHotKeyFromConfigEditor:(id)a0;
+ (id)getcustomizedHotKeyString:(id)a0;

@end
