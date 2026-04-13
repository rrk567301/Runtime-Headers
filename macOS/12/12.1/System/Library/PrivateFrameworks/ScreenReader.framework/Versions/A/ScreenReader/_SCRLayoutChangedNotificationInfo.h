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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithNotificationInfoDictionary:(id)a0 application:(id)a1;
- (struct __AXUIElement { } *)elementToFocus;
- (void)aggregateNotificationInfo:(id)a0;

@end
