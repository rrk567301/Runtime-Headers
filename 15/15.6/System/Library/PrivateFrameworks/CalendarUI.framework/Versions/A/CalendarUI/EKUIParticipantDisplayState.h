@interface EKUIParticipantDisplayState : NSObject

+ (void)initialize;
+ (id)displayImageForSharee:(id)a0 selected:(char)a1;
+ (void)initializeCache;
+ (id)acceptedParticipationIconSelected:(char)a0;
+ (id)busyStatusIcon;
+ (id)busyStatusSelectedIcon;
+ (id)declinedParticipationIconSelected:(char)a0;
+ (id)displayImageForFreeBusyType:(int)a0 selected:(char)a1;
+ (id)displayImageForParticipant:(id)a0 event:(id)a1 freeBusyType:(int)a2 selected:(char)a3;
+ (int)displayImageStateForParticipant:(id)a0 event:(id)a1 freeBusyType:(int)a2;
+ (id)errorStatusIconWithColor:(id)a0;
+ (id)freeStatusIcon;
+ (id)freeStatusSelectedIcon;
+ (id)imageForIconType:(unsigned long long)a0 selected:(char)a1;
+ (id)malformedStatusIcon;
+ (id)malformedStatusSelectedIcon;
+ (void)setImageIconForType:(unsigned long long)a0 selected:(char)a1;
+ (id)statusImageForName:(id)a0 color:(id)a1;
+ (id)templateStatusImageForName:(id)a0;
+ (id)tentativeParticipationIconSelected:(char)a0;
+ (id)unknownStatusIcon;
+ (id)unknownStatusSelectedIcon;

@end
