@class NSString, NSTimer, NSDate;
@protocol VUIRentalExpirationLabelDelegate;

@interface VUIRentalExpirationLabel : VUILabel

@property (copy, nonatomic) NSString *locStringPrefix;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (nonatomic) char contentIsAvailable;
@property (nonatomic) char forDownload;
@property (nonatomic) char useWarningColor;
@property (copy, nonatomic) NSDate *expirationDate;
@property (weak, nonatomic) id<VUIRentalExpirationLabelDelegate> delegate;

+ (id)_calculateExpirationStringForDate:(id)a0 displayWarningColor:(char *)a1 updateInterval:(long long *)a2 locStringPrefix:(id)a3;
+ (id)calculateExpirationStringForDate:(id)a0 updateInterval:(long long *)a1 locStringPrefix:(id)a2;
+ (id)labelForRentalExpirationDate:(id)a0 downloadExpirationDate:(id)a1 contentAvailabilityDate:(id)a2 downloadStatus:(unsigned long long)a3;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3 forDownload:(char)a4 contentIsAvailable:(char)a5;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3 useWarningColor:(char)a4;
+ (id)labelWithTextLayout:(id)a0 existingLabel:(id)a1 locStringPrefix:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (void)invalidateTimer;
- (void)_computeExpirationLabel:(id)a0;
- (void)vui_willMoveToWindow:(id)a0;

@end
