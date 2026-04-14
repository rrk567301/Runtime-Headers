@class NSString, SCRApplication;

@interface _SCRLayoutChangedNotificationInfo : NSObject <NSCopying> {
    struct __AXUIElement { } *_elementToFocus;
}

@property (retain, nonatomic) SCRApplication *application;
@property (nonatomic) BOOL screenChanged;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) BOOL performElementUpdateImmediately;
@property (nonatomic) BOOL isAlert;
@property (nonatomic) BOOL isPopup;
@property (copy, nonatomic) NSString *stringToAnnounce;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithNotificationInfoDictionary:(id)a0 application:(id)a1;
- (void)_setElementToFocusWithAXElementRef:(struct __AXUIElement { } *)a0;
- (struct __AXUIElement { } *)elementToFocus;
- (void)aggregateNotificationInfo:(id)a0;

@end
