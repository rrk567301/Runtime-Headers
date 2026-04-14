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

+ (id)_importantKeys;
+ (id)decodableClasses;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)fractionCompleted;
- (void)setTotalUnitCount:(long long)a0;
- (void)setCompletedUnitCount:(long long)a0;
- (void)setFinished:(BOOL)a0;
- (BOOL)isFinished;
- (id)_indentedDescription:(unsigned long long)a0;
- (BOOL)isIndeterminate;
- (void)setIndeterminate:(BOOL)a0;
- (void)setFractionCompleted:(double)a0;
- (long long)completedUnitCount;
- (long long)totalUnitCount;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;

@end
