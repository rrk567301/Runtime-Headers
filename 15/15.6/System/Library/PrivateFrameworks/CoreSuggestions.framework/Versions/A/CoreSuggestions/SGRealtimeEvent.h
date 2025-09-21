@class SGEvent, NSString;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) SGEvent *event;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *sourceMessageId;
@property (readonly, nonatomic) char isHarvested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)realtimeEventForCanceledEvent:(id)a0 eventIdentifier:(id)a1;
+ (id)realtimeEventForCanceledEvent:(id)a0 eventIdentifier:(id)a1 harvested:(char)a2;
+ (id)realtimeEventForDuplicateEvent:(id)a0 eventIdentifier:(id)a1;
+ (id)realtimeEventForDuplicateEvent:(id)a0 eventIdentifier:(id)a1 harvested:(char)a2;
+ (id)realtimeEventForExtractionExceptionWithSourceMessageId:(id)a0;
+ (id)realtimeEventForNearDuplicateEvent:(id)a0;
+ (id)realtimeEventForNearDuplicateEvent:(id)a0 harvested:(char)a1;
+ (id)realtimeEventForNewEvent:(id)a0;
+ (id)realtimeEventForNewEvent:(id)a0 harvested:(char)a1;
+ (id)realtimeEventUpdateToEvent:(id)a0 withNewValues:(id)a1;
+ (id)realtimeEventUpdateToEvent:(id)a0 withNewValues:(id)a1 harvested:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(int)a0 event:(id)a1 eventIdentifier:(id)a2 harvested:(char)a3;
- (id)initWithState:(int)a0 event:(id)a1 eventIdentifier:(id)a2 harvested:(char)a3 sourceMessageId:(id)a4;
- (char)isEqualToRealtimeEvent:(id)a0;

@end
