@class NSString;

@interface ATXPosterEdit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *lockscreenId;
@property (readonly, copy, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic, getter=isNewlyCreated) char newlyCreated;
@property (readonly, nonatomic) long long secondsSinceLastEdit;
@property (readonly, copy, nonatomic) NSString *outcome;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) char userChangedColor;
@property (readonly, nonatomic) char userChangedFont;
@property (readonly, nonatomic) char userChangedNumberingSystem;
@property (readonly, nonatomic) char userChangedPosterContent;
@property (readonly, nonatomic) char userChangedWidgets;
@property (readonly, nonatomic) char didLockscreenHaveWidgetsBeforeEdit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLockscreenId:(id)a0 entryPoint:(id)a1 newlyCreated:(char)a2 secondsSinceLastEdit:(long long)a3;
- (id)initWithLockscreenId:(id)a0 entryPoint:(id)a1 newlyCreated:(char)a2 secondsSinceLastEdit:(long long)a3 outcome:(id)a4 userChangedColor:(char)a5 userChangedFont:(char)a6 userChangedNumberingSystem:(char)a7 userChangedPosterContent:(char)a8 userChangedWidgets:(char)a9 didLockscreenHaveWidgetsBeforeEdit:(char)a10 duration:(unsigned long long)a11;
- (char)isEqualToATXPosterEdit:(id)a0;

@end
