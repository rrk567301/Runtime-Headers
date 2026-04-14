@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceNames;
+ (id)interfaceManager;

- (id)description;
- (id)interfaces;
- (id)init;
- (void)dealloc;
- (id)interfaceWithName:(id)a0;

@end
