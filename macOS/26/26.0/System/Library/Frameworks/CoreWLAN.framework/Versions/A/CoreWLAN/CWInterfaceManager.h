@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceManager;
+ (id)interfaceNames;

- (id)interfaces;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)interfaceWithName:(id)a0;

@end
