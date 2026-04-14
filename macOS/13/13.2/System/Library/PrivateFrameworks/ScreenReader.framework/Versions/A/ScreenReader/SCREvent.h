@class NSSet, SCRKeyboardKey, SCRCIndexMap;

@interface SCREvent : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    SCRKeyboardKey *_key;
    NSSet *_commands;
    unsigned long long _modifier;
    double _creationTime;
    SCRCIndexMap *_info;
    long long _priority;
    unsigned long long _keyRepeatCount;
    struct __flags { unsigned char isModalEvent : 1; unsigned char isKeyRepeatEvent : 1; unsigned char isEndingEvent : 1; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long insertionPointAffinity;
@property (nonatomic) BOOL isKeyRepeatEvent;
@property (readonly, nonatomic) unsigned long long keyRepeatCount;
@property (nonatomic) BOOL isModalEvent;
@property (nonatomic) BOOL isEndingEvent;

+ (id)_tagTitleMap;
+ (id)titleForTag:(long long)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (BOOL)containsKey:(id)a0;
- (void)setTag:(long long)a0;
- (id)info;
- (long long)priority;
- (id)argument;
- (id)key;
- (unsigned long long)modifier;
- (id)initWithType:(long long)a0;
- (long long)searchDirection;
- (long long)tag;
- (id)commands;
- (void)setCommands:(id)a0;
- (double)creationTime;
- (BOOL)containsCommand:(id)a0;
- (id)outputString;
- (long long)commandDirection;
- (BOOL)isGestureEvent;
- (BOOL)containsTag:(long long)a0;
- (struct { long long x0; long long x1; })searchValues;
- (long long)searchIdentifierKey;
- (id)initWithType:(long long)a0 key:(id)a1 modifier:(unsigned long long)a2 info:(id)a3 priority:(long long)a4;
- (id)initActivatorEventWithKey:(id)a0 modifier:(unsigned long long)a1 info:(id)a2 priority:(long long)a3;
- (id)initTagEventWithTag:(long long)a0 key:(id)a1 modifier:(unsigned long long)a2 info:(id)a3 priority:(long long)a4;
- (id)initEchoEventWithKey:(id)a0 modifier:(unsigned long long)a1 info:(id)a2 priority:(long long)a3;
- (id)initOutputEventWithString:(id)a0 info:(id)a1 priority:(long long)a2;
- (id)initGuideEventWithTarget:(id)a0 action:(id)a1 tag:(long long)a2 info:(id)a3 priority:(long long)a4;
- (void)incrementKeyRepeatCount;
- (void)setKeyRepeatCount:(unsigned long long)a0;
- (BOOL)isActivatorEvent;
- (BOOL)isGuideEvent;
- (BOOL)isTagEvent;
- (BOOL)isEchoEvent;
- (BOOL)isOutputEvent;
- (BOOL)isQuickNavSelectionEvent;
- (void)setInfoObject:(id)a0 forIndex:(unsigned int)a1;
- (void)setGuideTarget:(id)a0;
- (id)guideTarget;
- (BOOL)isGuideEventForTarget:(id)a0;
- (id)guideAction;
- (id)argumentString;
- (BOOL)containsCommandInCategory:(id)a0;
- (BOOL)containsCommand:(id)a0 isEndingEvent:(BOOL)a1;
- (long long)compareByPriorityAndDate:(id)a0;
- (BOOL)containsCharacters:(id)a0;
- (BOOL)containsKeyIgnoringCount:(id)a0;
- (BOOL)containsModifier:(unsigned long long)a0;
- (BOOL)isInvertedTEvent;
- (BOOL)isDFROriginatedEvent;

@end
