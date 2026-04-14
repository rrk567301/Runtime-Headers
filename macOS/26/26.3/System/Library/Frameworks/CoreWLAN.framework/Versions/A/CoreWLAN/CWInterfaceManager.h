@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceManager;
+ (id)interfaceNames;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)interfaces;
- (id)interfaceWithName:(id)a0;

@end
