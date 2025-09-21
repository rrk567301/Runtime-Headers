@class NSURL, NSBundle;

@interface ASKCellularDataInquiry : NSObject

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) char isSupported;
@property (readonly, nonatomic) char isEnabledForDevice;
@property (readonly, nonatomic) char isEnabledForBundle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;

@end
