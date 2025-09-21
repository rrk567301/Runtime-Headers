@class NSString;
@protocol CCSetBookkeeping;

@interface CCScheduledTaskState : NSObject {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ expired;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id<CCSetBookkeeping> setBookkeeping;

- (BOOL)isExpired;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 setBookkeeping:(id)a1;

@end
