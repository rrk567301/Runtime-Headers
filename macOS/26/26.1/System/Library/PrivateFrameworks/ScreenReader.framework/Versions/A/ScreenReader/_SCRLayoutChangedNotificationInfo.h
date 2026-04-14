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

- (id)description;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setElementToFocusWithAXElementRef:(struct __AXUIElement { } *)a0;
- (void)aggregateNotificationInfo:(id)a0;
- (struct __AXUIElement { } *)elementToFocus;
- (id)initWithNotificationInfoDictionary:(id)a0 application:(id)a1;

@end
