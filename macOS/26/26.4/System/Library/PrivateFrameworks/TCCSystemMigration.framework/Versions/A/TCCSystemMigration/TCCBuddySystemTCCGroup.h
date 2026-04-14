@class TCCBuddySystemTCCGroupIconConfig, NSString, NSImage;

@interface TCCBuddySystemTCCGroup : NSObject

@property (retain, nonatomic) TCCBuddySystemTCCGroupIconConfig *tccServiceIconConfig;
@property (readonly) NSString *tccServiceLabel;
@property (readonly) NSString *tccServiceDescription;
@property (readonly) NSImage *tccServiceIcon;

- (void).cxx_destruct;
- (id)initWithTCCServiceName:(id)a0;

@end
