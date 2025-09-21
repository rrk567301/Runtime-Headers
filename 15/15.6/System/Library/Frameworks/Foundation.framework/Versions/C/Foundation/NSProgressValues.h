@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; char overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; char overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    NSString *_kind;
    long long _portionOfParent;
    char _isCancellable;
    char _isPausable;
    char _isCancelled;
    char _isPaused;
    char _usingChildUserInfo;
    char _isPrioritizable;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)_importantKeys;
+ (id)decodableClasses;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)fractionCompleted;
- (void)setCompletedUnitCount:(long long)a0;
- (void)setTotalUnitCount:(long long)a0;
- (char)isIndeterminate;
- (struct _NSProgressFraction { long long x0; long long x1; char x2; })overallFraction;
- (id)_indentedDescription:(unsigned long long)a0;
- (long long)completedUnitCount;
- (char)isFinished;
- (void)setFinished:(char)a0;
- (void)setFractionCompleted:(double)a0;
- (void)setIndeterminate:(char)a0;
- (long long)totalUnitCount;

@end
