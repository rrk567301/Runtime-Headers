@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceManager;
+ (id)interfaceNames;

- (id)description;
- (void)dealloc;
- (id)interfaces;
- (id)init;
- (id)interfaceWithName:(id)a0;

@end
