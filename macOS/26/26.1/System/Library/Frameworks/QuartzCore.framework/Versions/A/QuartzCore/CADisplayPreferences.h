@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {
    struct CADisplayPreferencesPriv { BOOL x0; int x1; BOOL x2; BOOL x3; } *_priv;
}

@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;
@property (readonly, nonatomic) int _preferredHdrType;
@property (nonatomic) BOOL prefersHighRefreshRate;
@property (readonly, nonatomic) BOOL prefersVariableRefreshRate;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPreferences:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithMatchContent:(BOOL)a0 preferredHdrType:(int)a1 prefersHighRefreshRate:(BOOL)a2 prefersVRR:(BOOL)a3;
- (void)setPrefersVariableRefreshRate:(BOOL)a0;

@end
