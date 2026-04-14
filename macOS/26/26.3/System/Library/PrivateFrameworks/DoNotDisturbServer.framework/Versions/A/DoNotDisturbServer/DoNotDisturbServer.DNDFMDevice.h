@class NSString;

@interface DoNotDisturbServer.DNDFMDevice : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ deviceName;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) BOOL isThisDevice;

- (id)init;
- (void).cxx_destruct;

@end
