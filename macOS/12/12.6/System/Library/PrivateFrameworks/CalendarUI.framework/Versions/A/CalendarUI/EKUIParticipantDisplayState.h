@interface EKUIParticipantDisplayState : NSObject

+ (void)initialize;
+ (id)errorStatusIconWithColor:(id)a0;
+ (id)displayImageForParticipant:(id)a0 event:(id)a1 freeBusyType:(int)a2 selected:(BOOL)a3;
+ (id)displayImageForSharee:(id)a0 selected:(BOOL)a1;
+ (id)acceptedParticipationIconSelected:(BOOL)a0;
+ (id)tentativeParticipationIconSelected:(BOOL)a0;
+ (id)declinedParticipationIconSelected:(BOOL)a0;
+ (id)busyStatusIcon;
+ (void)initializeCache;
+ (void)setImageIconForType:(unsigned long long)a0 selected:(BOOL)a1;
+ (id)statusImageForName:(id)a0 color:(id)a1;
+ (id)imageForIconType:(unsigned long long)a0 selected:(BOOL)a1;
+ (int)displayImageStateForParticipant:(id)a0 event:(id)a1 freeBusyType:(int)a2;
+ (id)unknownStatusSelectedIcon;
+ (id)unknownStatusIcon;
+ (id)busyStatusSelectedIcon;
+ (id)freeStatusSelectedIcon;
+ (id)freeStatusIcon;
+ (id)malformedStatusIcon;
+ (id)templateStatusImageForName:(id)a0;
+ (id)displayImageForFreeBusyType:(int)a0 selected:(BOOL)a1;
+ (id)malformedStatusSelectedIcon;

@end
