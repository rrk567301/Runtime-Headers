@class NSString, FBMainDisplayLayoutPublisher;
@protocol BSInvalidatable;

@interface FBDisplayLayoutTransition : NSObject {
    FBMainDisplayLayoutPublisher *_publisher;
    id<BSInvalidatable> _transition;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isTransitioning) char transitioning;
@property (copy, nonatomic) NSString *transitionReason;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;

+ (void)flushLayoutForDisplayType:(long long)a0;
+ (id)layoutForDisplayType:(long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)endTransition;
- (void)beginTransition;
- (id)initWithDisplayType:(long long)a0 name:(id)a1;

@end
