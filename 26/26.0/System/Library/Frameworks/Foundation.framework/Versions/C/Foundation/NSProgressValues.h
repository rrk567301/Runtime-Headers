@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    NSString *_kind;
    long long _portionOfParent;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    BOOL _isPrioritizable;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)decodableClasses;
+ (id)_importantKeys;

- (void)setFinished:(BOOL)a0;
- (long long)completedUnitCount;
- (void)setCompletedUnitCount:(long long)a0;
- (BOOL)isFinished;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)totalUnitCount;
- (id)_indentedDescription:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setTotalUnitCount:(long long)a0;
- (void)setFractionCompleted:(double)a0;
- (id)description;
- (BOOL)isIndeterminate;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (id)initWithCoder:(id)a0;
- (void)setIndeterminate:(BOOL)a0;
- (double)fractionCompleted;

@end
