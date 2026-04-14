@class NSString;

@interface DoNotDisturbServer.DNDFMDevice : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ deviceName;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) BOOL isThisDevice;

- (void).cxx_destruct;
- (id)init;

@end
