@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    NSString *_kind;
    BOOL _isPrioritizable;
    long long _portionOfParent;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)decodableClasses;
+ (id)_importantKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTotalUnitCount:(long long)a0;
- (void)setCompletedUnitCount:(long long)a0;
- (double)fractionCompleted;
- (void)setFinished:(BOOL)a0;
- (BOOL)isFinished;
- (long long)totalUnitCount;
- (id)_indentedDescription:(unsigned long long)a0;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (BOOL)isIndeterminate;
- (void)setIndeterminate:(BOOL)a0;
- (void)setFractionCompleted:(double)a0;
- (long long)completedUnitCount;

@end
