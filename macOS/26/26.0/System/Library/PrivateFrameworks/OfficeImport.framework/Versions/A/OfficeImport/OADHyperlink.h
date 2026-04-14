@class NSURL, NSString;

@interface OADHyperlink : NSObject {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
}

@property (nonatomic) BOOL doEndSound;
@property (nonatomic) BOOL isVisited;
@property (nonatomic) BOOL doAddToHistory;

- (void)setAction:(id)a0;
- (id)action;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setTargetFrame:(id)a0;
- (id)targetFrame;
- (id)tooltip;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;
- (void)setTargetLocation:(id)a0;
- (void)setTargetMode:(int)a0;
- (void)setTooltip:(id)a0;
- (id)targetLocation;
- (int)targetMode;

@end
