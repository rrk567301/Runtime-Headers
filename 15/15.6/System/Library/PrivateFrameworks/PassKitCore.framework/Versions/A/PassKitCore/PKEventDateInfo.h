@class NSTimeZone, NSDate;

@interface PKEventDateInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) char ignoreTimeComponents;
@property (readonly, nonatomic, getter=isUnannounced) char unannounced;
@property (readonly, nonatomic, getter=isUndetermined) char undetermined;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
