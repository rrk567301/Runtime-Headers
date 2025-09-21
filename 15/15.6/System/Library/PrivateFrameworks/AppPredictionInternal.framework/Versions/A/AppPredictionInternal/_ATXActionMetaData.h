@class NSString;

@interface _ATXActionMetaData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char shouldPredict;
@property (readonly, nonatomic) char shouldPredictLockScreen;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 shouldPredict:(char)a2 shouldPredictLockScreen:(char)a3 actionKey:(id)a4;

@end
