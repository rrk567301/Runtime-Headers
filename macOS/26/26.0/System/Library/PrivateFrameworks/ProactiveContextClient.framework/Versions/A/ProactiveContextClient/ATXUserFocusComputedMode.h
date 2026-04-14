@class BMStream;

@interface ATXUserFocusComputedMode : NSObject {
    BMStream *_stream;
}

+ (id)currentMode;
+ (id)currentModeEvent;
+ (id)currentModeUUID;
+ (id)currentModeSemanticType;
+ (id)currrentModeEventAtGivenTime:(id)a0;

- (id)init;
- (id)initWithStream:(id)a0;
- (id)currentMode;
- (void).cxx_destruct;
- (id)currentModeEvent;
- (id)currentModeUUID;
- (id)currentModeSemanticType;
- (id)currrentModeEventAtGivenTime:(id)a0;
- (id)lastTwoUserFocusComputedStoreEvents;

@end
