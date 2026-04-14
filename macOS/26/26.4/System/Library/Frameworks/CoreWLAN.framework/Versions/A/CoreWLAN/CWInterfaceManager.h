@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceNames;
+ (id)interfaceManager;

- (id)interfaces;
- (id)init;
- (id)description;
- (void)dealloc;
- (id)interfaceWithName:(id)a0;

@end
