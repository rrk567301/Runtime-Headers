@interface MRAVOutputDeviceSymbolProvider : NSObject

+ (id)_currentDeviceRoutingSymbolName;
+ (id)symbolNameForProductIdentifier:(id)a0;
+ (id)_fallbackSymbolNameForOutputDevice:(id)a0;
+ (id)_symbolNameMap;
+ (id)symbolNameForClusterOutputDevice:(id)a0;
+ (id)symbolNameForModelID:(id)a0;
+ (id)symbolNameForOutputDevice:(id)a0;
+ (id)symbolNameForOutputDevices:(id)a0;

@end
