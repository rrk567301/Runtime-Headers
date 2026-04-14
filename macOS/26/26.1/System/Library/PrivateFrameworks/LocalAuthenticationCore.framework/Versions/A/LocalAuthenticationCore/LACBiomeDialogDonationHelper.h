@class BMSource;

@interface LACBiomeDialogDonationHelper : NSObject {
    BMSource *_source;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_donateEvent:(id)a0;
- (void)donateEvent:(id)a0;

@end
