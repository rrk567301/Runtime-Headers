@class NSUUID, NSMutableString, NSString, NSDate;
@protocol CXActionDelegate;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double timeout;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long originator;
@property (nonatomic) long long state;
@property (nonatomic) long long failureReason;
@property (readonly, nonatomic) char shouldTimeout;
@property (readonly, copy, nonatomic) NSMutableString *customDescription;
@property (retain, nonatomic) NSDate *commitDate;
@property (weak, nonatomic) id<CXActionDelegate> delegate;
@property (readonly, nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic) NSDate *timeoutDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fail;
- (void)fulfill;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateAsFailedWithReason:(long long)a0;
- (void)updateAsFulfilled;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
