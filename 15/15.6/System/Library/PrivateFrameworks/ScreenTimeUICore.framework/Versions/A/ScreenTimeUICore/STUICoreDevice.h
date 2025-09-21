@class NSString;

@interface STUICoreDevice : NSObject

@property (class, readonly) char isiPad;
@property (class, readonly) char isiPhone;
@property (class, readonly) char isiPodTouch;
@property (class, readonly) char isMac;
@property (class, readonly) NSString *localizedModel;

@end
