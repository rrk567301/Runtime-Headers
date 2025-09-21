@class NSString, NSSet, NSNumber;

@interface GDKnosisIntentArgInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intent;
@property (readonly, copy, nonatomic) NSSet *args;
@property (readonly, copy, nonatomic) NSNumber *score;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 args:(id)a1 score:(id)a2;

@end
