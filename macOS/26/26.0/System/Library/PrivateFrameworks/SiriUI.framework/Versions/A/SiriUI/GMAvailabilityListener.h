@interface GMAvailabilityListener : NSObject {
    void /* unknown type, empty encoding */ isSAESiriAvailable;
    void /* unknown type, empty encoding */ isGMAvailable;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
