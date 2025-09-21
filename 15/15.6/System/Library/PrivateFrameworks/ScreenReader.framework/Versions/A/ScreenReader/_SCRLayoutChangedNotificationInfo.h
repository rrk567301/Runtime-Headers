@class NSString, SCRApplication;

@interface _SCRLayoutChangedNotificationInfo : NSObject <NSCopying> {
    struct __AXUIElement { } *_elementToFocus;
}

@property (retain, nonatomic) SCRApplication *application;
@property (nonatomic) char screenChanged;
@property (nonatomic) char forceUpdate;
@property (nonatomic) char performElementUpdateImmediately;
@property (nonatomic) char isAlert;
@property (nonatomic) char isPopup;
@property (copy, nonatomic) NSString *stringToAnnounce;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)_setElementToFocusWithAXElementRef:(struct __AXUIElement { } *)a0;
- (void)aggregateNotificationInfo:(id)a0;
- (struct __AXUIElement { } *)elementToFocus;
- (id)initWithNotificationInfoDictionary:(id)a0 application:(id)a1;

@end
